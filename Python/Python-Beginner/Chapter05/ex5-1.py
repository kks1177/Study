# ex5-1.py
# 주사위 여러 개를 동시에 던지기

import random

## 전역 변수 선언 부분 ##
dice1, dice2, dice3, dice4, dice5, dice6 = [0] * 6
throwCount, serialCount = 0, 0

## 메인 코드 부분 ##
if __name__ == "__main__":
    while True:
        throwCount += 1

        dice1 = random.randrange(1, 7)
        dice2 = random.randrange(1, 7)
        dice3 = random.randrange(1, 7)
        dice4 = random.randrange(1, 7)
        dice5 = random.randrange(1, 7)
        dice6 = random.randrange(1, 7)
        
        if dice1 == dice2 == dice3 == dice4 == dice5 == dice6:
            print("6개의 주사위가 모두 동일한 숫자가 나옴 -->", dice1, dice2, dice3, dice4, dice5, dice6)
            break
        elif (dice1 == dice2 == dice3 == dice4 == dice5) or (dice1 == dice2 == dice3 == dice4 == dice6) or (dice1 == dice2 == dice3 == dice4 == dice6):
            serialCount += 1

        print("6개가 동일한 숫자가 나올 때까지 주사위를 던진 횟수 -->", throwCount)
        print("6개가 동일한 숫자가 나올 때까지, 1~6의 연속번호가 나온 횟수 -->", serialCount)
