# code11-1.py
# 한 행씩 읽어 들이기

inFp = None     # 입력 파일
inStr = ""      # 읽어 온 문자열

inFp = open("C:/Temp/data1.txt", "r")

inStr = inFp.readline()
print(inStr, end="")

inStr = inFp.readline()
print(inStr, end="")

inStr = inFp.readline()
print(inStr, end="")

inFp.close()
