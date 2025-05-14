# code10-19.py
# 대화상자의 생성과 사용

from tkinter import *
from tkinter.simpledialog import *

## 함수 선언 부분 ##
window = Tk()
window.geometry("400x100")

label1 = Label(window, text="입력된 값")
label1.pack()

value = askinteger("확대배수", "주사위 숫자(1~6)을 입력", minvalue=1, maxvalue=6)

label1.configure(text=str(value))
window.mainloop()
