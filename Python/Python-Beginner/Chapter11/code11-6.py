# code11-6.py
# 파일을 열 때 오류 처리

import os

inFp = None
fName, inList, inStr = "", [], ""

fName = input("파일명 입력 : ")

if os.path.exists(fName):
    inFp = open(fName, "r")
    
    inList = inFp.readlines()
    for inStr in inList:
        print(inStr, end="")
        
    inFp.close()
else:
    print("%s 파일이 없습니다." % fName)
    