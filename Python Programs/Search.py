import pyautogui
import time

time.sleep(5)
count = 0
list=[" Inspiration", "Name", 'Speech','vs code', 'tiles', 'bikes', 'youtube', 'airpods', 'gate','pin','bulb']
while count<=5:
    for i in list:
        pyautogui.typewrite(i+str())
        count=count+1
        pyautogui.press("enter")
        pyautogui.moveTo(557, 154, duration = 1)
        pyautogui.click()
 
        time.sleep(5)
        