import cv2
import time
import numpy as np
import Hand_TrackingModule as htm
import math
from ctypes import cast, POINTER
from comtypes import CLSCTX_ALL
from pycaw.pycaw import AudioUtilities, IAudioEndpointVolume
from cvzone.SerialModule import SerialObject
from time import sleep
from tkinter import *
from PIL import ImageTk,Image

def Touchless_device_control():
    wCam, hCam = 640, 480

    cap = cv2.VideoCapture(0)
    #Set kích thước cam
    cap.set(3, wCam)
    cap.set(4, hCam)
    pTime = 0
    arduino = SerialObject("COM3")
    detector = htm.handDetector(detectionCon=0.7, maxHands=1)
    
    volBar = 400
    volPer = 0
    volcoi=0
    area = 0
    colorVol = (255, 0, 0)
    
    while True:
        success, img = cap.read()
    
        # Find Hand
        img = detector.findHands(img)
        lmList, bbox = detector.findPosition(img, draw=True)
        if len(lmList) != 0:
    
            # Filter based on size
            area = (bbox[2] - bbox[0]) * (bbox[3] - bbox[1]) // 100
            if 250 < area < 1000:
                # Tìm khoảng cách giữa ngón trỏ và ngón cái.
                length, img, lineInfo = detector.findDistance(4, 8, img)
    
                # Chuyển đổi theo tỷ lệ: Thanh âm lượng, phần trăm âm lượng và âm lượng.
                volBar = np.interp(length, [50, 200], [400, 150])
                volPer = np.interp(length, [50, 200], [0, 100])
                volcoi = int(np.interp(length, [50, 200], [0, 255]))
    
                # Giảm độ phân giải để làm cho nó mượt mà hơn.
                smoothness = 10
                volPer = smoothness * round(volPer / smoothness)
    
                # Kiểm tra ngón tay thẳng
                fingers = detector.fingersUp()
    
                # Nếu ngón út down , nếu ngón áp út down và các TH còn lại.
                if not fingers[4]:
                    #Còi reo mức cực đại và đèn đỏ sáng cộng tín hiệu SOS!!!
                    cv2.putText(img, "SOS!!!", (50, 100),
                    cv2.FONT_HERSHEY_PLAIN, 3, (0, 0, 255), 3)
                    cv2.circle(img, (lineInfo[4], lineInfo[5]), 15, (0, 255, 0), cv2.FILLED)
                    colorVol = (0, 255, 0)
                    arduino.sendData([255001000])               
                elif not fingers[3]:
                    cv2.putText(img, "NEED", (50, 100),
                    cv2.FONT_HERSHEY_PLAIN, 3, (0, 255, 0), 3)
                    cv2.circle(img, (lineInfo[4], lineInfo[5]), 15, (0, 255, 0), cv2.FILLED)
                    colorVol = (0, 255, 0)
                    arduino.sendData([volcoi*1000000+1])     
                else:
                    #Tắt hết còi và đèn.
                    colorVol = (255, 0, 0)
                    arduino.sendData([0,0,0])
                
    
        # Drawings
        cv2.rectangle(img, (50, 150), (85, 400), (255, 0, 0), 3)
        cv2.rectangle(img, (50, int(volBar)), (85, 400), (255, 0, 0), cv2.FILLED)
        cv2.putText(img, f'{int(volPer)} %', (40, 450), cv2.FONT_HERSHEY_COMPLEX,
                    1, (255, 0, 0), 3)
    
        # Tính độ phân giải.
        cTime = time.time()
        fps = 1 / (cTime - pTime)
        pTime = cTime
        cv2.putText(img, f'FPS: {int(fps)}', (40, 50), cv2.FONT_HERSHEY_COMPLEX,
                    1, (255, 0, 0), 3)
    
        cv2.imshow("Nhan dien ho tro benh nhan can giup do", img)
        if cv2.waitKey(1) & 0xFF == ord('q'):
                break
#Chương trình giao diện tương tác
window = Tk()
#Set up kích thước cửa số giao diện
window.geometry("1000x562")
#Đặt tên cho cửa sổ giao diện
window.title("Control touchless device with image processing")
#Lấy hình ảnh đưa lên giao diện
anh=Image.open("Anhgiaodien.jpg")
#Resize lại kích thước để phù hợp với giao diện
resize_Image=anh.resize((1000,562))
#Đưa ảnh lên giao diện Tkinter
image_bia= ImageTk.PhotoImage(resize_Image)
#Đặt tên cho giao diện ảnh
Img_1=Label(image=image_bia)
#Đặt vị trí cho giao diện Tkinter
Img_1.grid(column=0,row=0)
#Tạo nút nhấn trên giao diện Tkinter
button=Button(window,text="Start",font=("Times New Roman",20),bg='silver',fg='yellow',command= Touchless_device_control)
#Đặt vị trí cho nút nhấn
button.place(relx=0.45,rely=0.53)
#Vòng lặp vô tận và dừng lại khi nhấn close
window.mainloop()