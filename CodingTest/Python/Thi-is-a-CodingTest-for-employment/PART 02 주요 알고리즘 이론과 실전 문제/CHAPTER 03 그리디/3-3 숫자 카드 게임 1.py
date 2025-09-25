# 3-3 숫자 카드 게임 1.py
# min() 함수를 이용하는 답안 예시
'''
 행의 개수 N, 열의 개수 M
 각 행마다 가장 작은 수를 찾은 뒤에 그 수 중에서 가장 큰 수를 찾는 문제
'''

# N, M을 공백으로 구분하여 입력받기
n, m = map(int, input().split())

result = 0
# 한 줄씩 입력받아 확인
for i in range(n):
    data = list(map(int, input().split()))

    # 현재 줄에서 '가장 작은 수' 찾기
    min_value = min(data)

    # '가장 작은 수'들 중에서 가장 큰 수 찾기
    result = max(result, min_value)

print(result)
