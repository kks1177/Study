# code14-1.py
# [미니 포토샵 프로젝트] 메뉴 구현과 함수 선언

from tkinter import *
from tkinter.filedialog import *
from tkinter.simpledialog import *
from PIL import Image, ImageFilter, IMageEnhance, ImageOps

## 함수 선언 부분 ##
def displayImage():     # Code14-2.py에서 구현
    pass

def func_open():        # Code14-2.py에서 구현
    pass

def func_save():        # Code14-3.py에서 구현
    pass

def func_exit():
    exit()
    
def func_zoomin():      # Code14-4.py에서 구현
    pass

def func_zoomout():     # Code14-4.py에서 구현
    pass

def func_mirror1():     # Code14-5.py에서 구현
    pass

def func_mirror2():     # Code14-5.py에서 구현
    pass

def func_rotate():      # Code14-6.py에서 구현
    pass

def func_bright():      # Code14-7.py에서 구현
    pass

def func_dark():        # Code14-7.py에서 구현
    pass

def func_blur():        # Code14-8.py에서 구현
    pass

def func_embo():        # Code14-8.py에서 구현
    pass

def func_bw():          # Code14-9.py에서 구현
    pass

## 전역 변수 선언 부분 ##
window, canvas, paper = [None] * 3
photo, photo2 = [None] * 2
oriX, oriY = [0] * 2

## 메인 코드 부분 ##
window = Tk()
window.geometry("250x250")
window.title("미니 포토샵")

mainMenu = Menu(window)
window.config(menu=mainMenu)

fileMenu = Menu(mainMenu)
mainMenu.add_cascade(label="파일", menu=fileMenu)
fileMenu.add_command(label="파일 열기", command=func_open)
fileMenu.add_command(label="파일 저장", command=func_save)
fileMenu.add_spearator()
fileMenu.add_command(label="프로그램 종료", command=func_exit)

image1Menu = Menu(mainMenu)
mainMenu.add_cascade(label="이미지 처리(1)", menu=image1Menu)
image1Menu.add_command(label="확대", command=func_zoomin)
image1Menu.add_command(label="축소", command=func_zoomout)
image1Menu.add_separator()
image1Menu.add_command(label="상하 반전", command=func_mirror1)
image1Menu.add_command(lagel="좌우 반전", command=func_mirror2)
image1Menu.add_command(label="회전", command=func_rotate)

image2Menu = Menu(mainMenu)
mainMenu.add_cascade(label="이미지 처리(2)", menu=image2Menu)
image2Menu.add_command(label="밝게", command=func_bright)
image2Menu.add_command(label="어둡게", command=func_dark)
image2Menu.add_separator()
image2Menu.add_command(label="블러링", command=func_blur)
image2Menu.add_command(lagel="엠보싱", command=func_embo)
image2Menu.add_separator()
image2Menu.add_command(label="흑백이미지", command=func_bw)

window.mainloop()
