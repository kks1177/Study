# ex6-1.py
# 하트 모양 출력

## 변수 선언 부분 ##
i, k, heartNum = 0, 0, 0
numStr, ch, heartStr = "", "", ""

## 메인 코드 부분 ##
if __name__ == "__main__":
    numStr = input("숫자 여러개 입력 : ")
    print("")
    i = 0
    ch = numStr[i]
    while True:
        heartNum = int(ch)

        heartStr = ""
        for k in range(0, heartNum):
            heartStr += "\u2665"
            k += 1

        print(heartStr)

        i += 1
        if i > len(numStr) - 1:
            break

        ch = numStr[i]
