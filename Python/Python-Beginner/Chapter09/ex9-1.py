# ex9-1.py
# 문자와 숫자가 섞인 데이터 정렬하기

import random

## 함수 선언 부분 ##
def getNumber(strData):
    numStr = ''
    for ch in strData:
        if ch.isdigit():
            numStr += ch
            
    return int(numStr)

## 전역 변수 선언 부분 ##
data = []
i, k = 0, 0

## 메인 코드 부분 ##
if __name__ == "__main__":
    for i in range(0, 10):      # 임의의 데이터를 10개 생성
        tmp = hex(random.randint(0, 100000))
        tmp = tmp[2:]       # 앞의 '0x'를 제거
        data.append(tmp)
        
    print("정렬 전 데이터 : ", end='')
    [print(num, end=' ') for num in data]
    
    for i in range(0, len(data)-1):
        for k in range(i+1, len(data)):
            if getNumber(data[i]) > getNumber(data[k]):
                tmp = data[i]
                data[i] = data[k]
                data[k] = tmp
                
    print("\n정렬 후 데이터 : ", end='')
    [print(num, end=' ') for num in data]
    