# ex4-1.py
# 윤년 계산하기

## 전역 변수 부분 ##
year = 0

## 메인 코드 부분 ##
if __name__ == "__main__":
    year = int(input("연도를 입력 : "))

    if ((year % 4 == 0) and (year % 100 != 0)) or (year % 400 == 0):
        print("%d년은 윤년" % year)
    else:
        print("%d년은 윤년 X" % year)
