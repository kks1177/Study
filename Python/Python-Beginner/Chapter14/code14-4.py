# code14-4.py
# [미니 포토샵 프로젝트] 이미지 확대 및 축소

def func_zoomin():
    global window, canvas, paper, photo, photo2, oriX, oriY
    scale = askinteger("확대", "확대할 배율 입력", minvalue=2, maxvalue=4)
    photo2 = photo.copy()
    photo2 = photo2.resize((int(oriX*scale), int(oriY*scale)))
    newX = photo2.width
    newY = photo2.height
    displayImage(photo2, newX, newY)
    
def func_zoomout():
    global window, canvas, paper, photo, photo2, oriX, oriY
    scale = askinteger("축소", "축소할 배율 입력", minvalue=2, maxvalue=4)
    photo2 = photo.copy()
    photo2 = photo2.resize((int(oriX/scale), int(oriY/scale)))
    newX = photo2.width
    newY = photo2.height
    displayImage(photo2, newX, newY)
    