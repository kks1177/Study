# code10-16.py
# 키보드 이벤트 기본 처리

from tkinter import *
from tkinter import messagebox

## 함수 선언 부분 ##
def keyEvent(event):
    messagebox.showinfo("키보드 이벤트", "눌린 키 : " + chr(event.keycode))
    
## 메인 코드 부분 ##
window = Tk()

window.bind("<Key>", keyEvent)

window.mainloop()
