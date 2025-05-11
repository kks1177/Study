# code8-2.py
# [프로그램 1]입력된 문자열 거꾸로 출력

## 변수 선언 부분 ##
inStr, outStr = "", ""
count, i = 0, 0

## 메인 코드 부분 ##
inStr = input("문자열 입력 : ")
count = len(inStr)

for i in range(0, count):
    outStr += inStr[count - (i+1)]
    
print("내용 거꾸로 출력 --> %s" % outStr)
