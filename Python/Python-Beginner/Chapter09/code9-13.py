# code9-13.py
# [프로그램 1] 로또 번호 추첨

import random

## 함수 선언 부분 ##
def getNum():
    return random.randrange(1, 46)

## 전역 변수 선언 부분 ##
lotto = []
num = 0

## 메인 코드 부분 ##
print("** 로또 추첨을 시작합니다. ** \n")

while True:
    num = getNum()
    
    if lotto.count(num) == 0:
        lotto.append(num)
        
    if len(lotto) >= 6:
        break
    
print("추첨된 로또 번호 ==> ", end='')
lotto.sort()
for i in range(0, 6):
    print("%d " % lotto[i], end='')
