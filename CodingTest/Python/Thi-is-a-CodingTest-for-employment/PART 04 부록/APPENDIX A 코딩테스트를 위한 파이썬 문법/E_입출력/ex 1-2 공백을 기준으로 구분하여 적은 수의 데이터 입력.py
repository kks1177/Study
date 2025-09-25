# ex 1-2 공백을 기준으로 구분하여 적은 수의 데이터 입력.py
'''
공백으로 구분된 데이터의 개수가 많지 않다면, 단순히 map(int, input().split())을 이용
'''

# n, m, k를 공백으로 구분하여 입력
n, m, k = map(int, input().split())

print(n, m, k)
