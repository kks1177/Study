# code11-11.py
# [프로그램 2] 흑백 사진 출력

from tkinter import *

## 변수 선언 부분 ##
window = None
canvas = None
XSIZE, YSIZE = 256,256

## 메인 코드 부분 ##
window = Tk()
canvas = Canvas(window, height=XSIZE, width=YSIZE)

canvas.pack()
window.mainloop()
