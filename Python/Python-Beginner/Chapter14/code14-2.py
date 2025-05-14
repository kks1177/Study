# code14-2.py
# [미니 포토샵 프로젝트] 미니 포토샵 프로젝트의 완성

def displayImage(img, width, height):
    global window, canvas, paper, photo, photo2, oriX, oriY
    
    window.geometry(str(width) + 'x' + str(height))
    if canvas != None:
        canvas.destory()
        
    canvas = Canvas(window, width=width, height=height)
    paper = PhotoImage(width=width, height=height)
    canvas.create_image((width/2, height/2), image=paper, state="normal")
    rgbString = ""
    rgbImage = img.convert('RGB')
    for i in range(0, height):
        tmpString = ""
        for k in range(0, width):
            r, g, b = rgbImage.getpixel((k, i))
            tmpString += "#%02x%02x%02x " % (r, g, b)   # x 뒤에 한 칸 공백
        rgbString += "{" + tmpString + "}"              # } 뒤에 한 칸 공백
    paper.put(rgbString)
    canvas.pack()
    
def func_open():
    global window, canvas, paper, photo, photo2, oriX, oriY
    readFp = askopenfilename(parent=window, filetypes=(("모든 그림 파일", "*.jpg; *.jpeg; *.bmp; *.png; *.tif; *.gif"), ("모든 파일", "*.*")))
    photo = Image.open(readFp).convert('RGB')
    oriX = photo.width
    oriY = photo.height
    
    photo2 = photo.copy()
    newX = photo2.width
    newY = photo2.height
    displayImage(photo2, newX, newY)
    