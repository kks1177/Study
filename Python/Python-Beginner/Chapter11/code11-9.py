# code11-9.py
# [프로그램 1] 파일 암호화 및 암호 해독

## 변수 선언 부분 ##
inFp, outFp = [None] * 2
inStr, outStr = "", ""
i = 0
secu = 0

## 메인 코드 부분 ##
secuYN = input("1. 암호화 2. 암호 해석 중 선택 : ")
inFname = input("입력 파일명 입력 : ")
outFname = input("출력 파일명 입력 : ")

if secuYN == "1":
    secu = 100
elif secuYN == "2":
    secu = 200
    
inFp = open(inFname, "r", encoding="utf-8")
outFp = open(outFname, "w", encoding="utf-8")

while True:
    inStr = inFp.readline()
    if not inStr:
        break
    
    outstr = ""
    for i in range(0, len(inStr)):
        ch = inStr[i]
        chNum = ord(ch)
        chNum = chNum + secu
        ch2 = chr(chNum)
        outStr += ch2
        
    outFp.write(outStr)
    
outFp.close()
inFp.close()
print("%s --> %s 변환 완료" % (inFname, outFname))
