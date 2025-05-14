# code14-6.py
# [미니 포토샵 프로젝트] 이미지 회전

def func_rotate():
    global window, canvas, paper, photo, photo2, oriX, oriY
    degree = askinteger("회전", "회전할 각도 입력", minvalue=0, maxvalue=360)
    photo2 = photo.copy()
    photo2 = photo2.rotate(degree, extand=True)
    newX = photo2.width
    newY = photo2.height
    displayImage(photo2, newX, newY)
    