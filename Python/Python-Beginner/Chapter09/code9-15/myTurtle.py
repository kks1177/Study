# myTurtle.py
# [프로그램 2] 모듈을 활용해 글자를 쓰는 거북이

import random
from tkinter.simpledialog import *

def getString():
    retStr = ''
    retStr = askstring("문자열 입력", "거북이 쓸 문자열을 입력")
    return retStr

def getRGB():
    r, g, b = 0, 0, 0
    r = random.random()
    g = random.random()
    b = random.random()
    return (r, g, b)

def getXYAS(sw, sh):
    x, y, angle, size = [0] * 4
    x = random.randrange(int(-sw / 2), int(sw / 2))
    y = random.randrange(int(-sh / 2), int(sh / 2))
    angle = random.randrange(0, 360)
    size = random.randrange(10, 50)
    return [x, y, angle, size]
