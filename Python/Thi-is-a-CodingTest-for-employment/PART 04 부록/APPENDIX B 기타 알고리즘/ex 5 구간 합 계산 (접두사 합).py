# ex 5 구간 합 계산 (접두사 합).py
# 접두사 합을 활용한 구간 합 계산 소스코드
'''
구간 합 문제 : 연속적으로 나열된 N개의 수가 있을 때, 특정 구간의 모든 수를 합한 값을 구하는 문제
구간 합 계산을 위해 가장 많이 사용되는 기법 -> 접두사 합 (Prefix Sum)
 * 접두사 합 : 리스트 맨 앞부터 특정 위치까지의 합을 구해 놓은 것
'''

# 데이터의 개수 N과 전체 데이터 선언
n = 5
data = [10, 20, 30, 40, 50]

# 접두사 합(Prefix Sum) 배열 계산
sum_value = 0
prefix_sum = [0]

for i in data:
    sum_value += i
    prefix_sum.append(sum_value)

# 구간 합 계산 (세 번째 수부터 네 번째 수까지)
left = 3
right = 4
print(prefix_sum[right] - prefix_sum[left-1])
