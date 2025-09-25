# 3-2 큰 수의 법칙.py
'''
 배열의 크기 N, 숫자가 더해지는 횟수 M, 배열의 가장 큰 수가 연속해서 더해질 수 있는 횟수 K
 가장 큰 수가 더해지는 횟수 : int(M / K+1)) * K + M % (K+1)

 int(A / B) == A // B : A를 B로 나눈 몫 구하기
 list(), map() : 여러 데이터 한꺼번에 입력 받는 함수
'''

# N, M, K를 공백으로 구분하여 입력받기
n, m, k = map(int, input().split())
# N개의 수를 공백으로 구분하여 입력받기
data = list(map(int, input().split()))

data.sort()     # 입력받은 수 정렬
first = data[n-1]       # 가장 큰 수
second = data[n-2]      # 두 번째로 큰 수

# 가장 큰 수가 더해지는 횟수 계산
count = int(m / (k+1)) * k
count += m % (k+1)

result = 0
result += count * first       # 가장 큰 수 더하기
result += (m - count) * second  # 두 번째로 큰 수 더하기

print(result)       # 최종 답안 출력



# 단순하게 푸는 답안 예시
'''
# N, M, K를 공백으로 구분하여 입력 받기
n, m, k = map(int, input().split())
# N개의 수를 공백으로 구분하여 입력 받기
data = list(map(int, input().split()))

data.sort()     # 입력 받은 수들 정렬하기
first = data[n-1]
second = data[n-2]

result = 0

while True:
    for i in range(k):      # 가장 큰 수를 K번 더하기
        if m == 0:          # m이 0이라면 반복문 탈출
            break
        result += first
        m -= 1      # 더할 때 마다 1씩 빼기
    if m == 0:      # m이 0이라면 반복문 탈출
        break
    result += second        # 두 번째로 큰 수를 한 번 더하기
    m -= 1          # 더할 때마다 1씩 빼기

print(result)       # 최종 답안 출력
'''

