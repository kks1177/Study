# code14-3.py
# [미니 포토샵 프로젝트] 이미지 저장

def func_save():
    global window, canvas, paper, photo, photo2, oriX, oriY
    
    if photo2 == None:
        return
    saveFp = asksaveasfile(parent=window, mode='w', defaultextension=".jpg", filetypes=(("JPG 파일", "*.jpg; *.jpeg"), ("모든 파일", "*.*")))
    
    photo2.save(saveFp.name)
    