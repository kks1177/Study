# 7-4 입력 라이브러리(sys).py
# sys 라이브러리의 readline() 함수 이용 : 입력 데이터가 많은 문제에서 input() 함수 대신 사용!
# input() 함수보다 readline() 함수의 동작속도가 빠름

import sys
# 하나의 문자열 데이터 입력받기
input_data = sys.stdin.readline().rstrip()

# 입력받은 문자열 그대로 출력
print(input_data)
