# ex 1-3 많은 입력을 최대한 빠르게, readline() 사용.py
'''
파이썬의 input() 함수는 동작속도가 느림
파이썬의 sys 라이브러리에 정의되어 있는 sys.stdin.readline() 함수 이용
 sys 라이브러리를 사용할 때는 한 줄 입력을 받고 나서
  rstrip() 함수를 꼭 호출
   이유 : readline() 함수는 엔터를 공백으로 입력 받는데 이 공백을 제거하기 위해 사용
'''

import sys

# 문자열 입력받기
data = sys.stdin.readline().rstrip()
print(data)
