# code11-5.py
# 도스 명령어 type의 구현

inFp = None
fName, inList, inStr = "", [], ""

fName = input("파일명 입력 : ")
inFp = open(fName, "r")

inList = inFp.readlines()
for inStr in inList:
    print(inStr, end="")

inFp.close()
