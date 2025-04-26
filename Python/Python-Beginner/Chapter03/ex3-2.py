# ex3-2.py
# 입력 문자열 거꾸로 출력

## 변수 선언 부분 ##
inStr = ""

## 메인 코드 부분 ##
if __name__ == "__main__":
    inStr = input("문자열 입력 : ")

    for i in range(len(inStr)-1, -1, -1):
        print("%c" % inStr[i], end="")
