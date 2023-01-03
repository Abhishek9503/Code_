import pyautogui
import time

time.sleep(5)
count = 0
list=["a", "good", 'bad','best', 'cricket', 'footbll', 'live score', 'Chritiano', 'HAppy','FAst','bat','v','w','x','y','z']
while count<=5:
    for i in list:
        pyautogui.typewrite(i+str())
        count=count+1
        pyautogui.press("enter")
        pyautogui.moveTo(557, 154, duration = 0.5  )
        pyautogui.click()
 
        time.sleep(5)
    
    
    
        
    