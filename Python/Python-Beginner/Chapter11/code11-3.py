# code11-3.py
# 한 번에 모두 읽어 들이기

inFp = None
inList = ""

inFp = open("C:/Temp/data1.txt", "r")

inList = inFp.readlines()
print(inList)

inFp.close()
