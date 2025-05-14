# code11-8.py
# 도스 명령어 copy의 구현

inFp, outFp = [None] * 2
inStr = ""

inFp = open("C:/Windows/win.ini", "r")
outFp = open("C:/Temp/data.txt" "w")

inList = inFp.readlines()
for inStr in inList:
    outFp.writelines(inStr)
    
inFp.close()
outFp.close()
print("--- 파일이 정상적으로 복사되었음 ---")
