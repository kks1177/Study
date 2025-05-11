# ex8-1.py
# 대소문자 상호 변환하기

## 전역 변수 선언 부분 ##
inStr, outStr = "", ""
ch = ""
count, i = 0, 0

## 메인 코드 부분 ##
if __name__ == "__main__":
    inStr = input("문자열 입력 : ")
    count = len(inStr)
    
    for i in range(0, count):
        ch = inStr[i]
        if(ord(ch) >= ord("A") and ord(ch) <= ord("Z")):
            newCh = ch.lower()
        elif(ord(ch) >= ord("a") and ord(ch) <= ord("z")):
            newCh = ch.upper()
        else:
            newCh = ch
            
        outStr += newCh
        
    print("대소문자 변환 결과 --> %s" % outStr)
    