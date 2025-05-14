# code11-4.py
# 한 번에 모두 읽어 들이기

inFp = None
inList, inStr = [], ""

inFp = open("C:/Temp/data1.txt", "r")

inList = inFp.readlines()
for inStr in inList:
    print(inStr, end="")

inFp.close()
