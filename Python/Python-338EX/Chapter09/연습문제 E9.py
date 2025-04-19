# 연습문제 E9.py

"""
# E9-1. 다음 프로그램의 실행 결과는 무엇인가?
import math
print(math.ceil(35.1), math.ceil(35.7))

# E9-2. 다음 프로그램의 실행 결과는 무엇인가?
import math
print(math.floor(7.1), math.floor(-8.7))

# E9-3. 다음 프로그램의 실행 결과는 무엇인가?
print(round(23.7), round(-12.3))

# E9-4. 다음 프로그램의 실행 결과는 무엇인가?
import math
print(math.pow(2, 4), math.pow(5, -2))
"""


"""
# E9-5. GMT 기준으로 1970년1월1일 0분0초로부터 경과된 현재의 시간, 즉 타임스탬프를 얻는 데 사용되는 time 모듈의 함수명은 무엇인가?
# 답 : time.time()

# E9-6. GMT 기준이 아닌 현지 시간, 즉 Local Time을 얻는 데 사용되는 time 모듈의 함수명은 무엇인가?
# 답 : time.localtime()

# E9-7. 프로그램 실행을 잠시 지연시키는 데 사용되는 time 모듈의 함수명은 무엇인가?
# 답 : time.sleep()

# E9-8. 현재의 날짜와 시간을 구하는 데 사용되는 datetime 모듈의 함수명은 무엇인가?
# 답 : datetime.now()

# E9-9. 0에서 1사이(1은 포함x)의 랜덤 실수를 발생시키는 데 사용되는 random 모듈의 함수명은 무엇인가?
# 답 : random.random()

# E9-10. 리스트나 튜플 등의 요소 중 하나를 랜덤하게 선택하는 데 사용되는 random 모듈의 함수명은 무엇인가?
# 답 : random.choice()
"""


"""
# E9-11. 다음은 주사위를 던져 주사위 눈의 숫자를 발생시키는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
import random
import time

print("two dice are rolling ...")
time.sleep(2)

me = random.randint(1, 6)
computer = random.randint(1, 6)
print("나 :", me)
print("컴퓨터 :", computer)
"""


# S9-1. 리스트 x와 random 모듈의 choice() 함수를 이용하여 다음의 실행 결과를 가져오는 가위바위보 프로그램을 작성해 보시오.
import time
import random

def who_win(x, y):
    if x == "가위":
        if y == "가위":
            result = "무승부!"
        elif y == "바위":
            result = "컴퓨터 승리!"
        else:
            result = "나의 승리!"
    elif x == "바위":
        if y == "가위":
            result = "나의 승리!"
        elif y == "바위":
            result = "무승부!"
        else:
            result = "컴퓨터 승리!"
    else:
        if y == "가위":
            result = "컴퓨터 승리!"
        elif y == "바위":
            result = "나의 승리!"
        else:
            result = "무승부!"

    return result


print("=" * 50)
print("가위바위보 게임")
print("=" * 50)

x = ["가위", "바위", "보"]

again = "y"

while again == "y":
    me = random.choice(x)
    computer = random.choice(x)
    winner = who_win(me, computer)

    print("나 : %s" % me)
    print("컴퓨터 : %s" % computer)
    time.sleep(2)

    print(winner)
    print("-" * 30)

    again = input("계속하시려면 y를 입력하세요! ")

print("게임이 종료되었습니다!")



