import serial #Serial imported for Serial communication

import time #Required to use delay functions

import pyautogui


ArduinoSerial = serial.Serial('COM10',9600) #Create Serial port object called arduinoSerialData

time.sleep(2) #wait for 2 seconds for the communication to get established



while 1:

    incoming = str (ArduinoSerial.readline()) #read the serial data and print it as line

    print(incoming)


    if 'fullscreen' in incoming:

        pyautogui.press('f')
        
        
    if 'play/pause' in incoming:

        pyautogui.press('space')
        
        
    if 'back' in incoming:

        pyautogui.press('left')  



    if 'next' in incoming:

        pyautogui.press('right') 



    if 'vup' in incoming:

        pyautogui.press('up')

        


    if 'vdn' in incoming:

        pyautogui.press('down')



    incoming = ""
