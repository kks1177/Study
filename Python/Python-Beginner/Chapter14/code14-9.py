# code14-9.py
# [미니 포토샵 프로젝트 완성] 이미지 흑백 처리

def func_bw():
    global window, canvas, paper, photo, photo2, oriX, oriY
    photo2 = photo.copy()
    photo2 = ImageOps.graysclae(photo2)
    newX = photo2.width
    newY = photo2.height
    displayImage(photo2, newX, newY)
    