# 연습문제 4.py

# 4-1. 문제 1의 n까지의 합 구하기를 재귀 호출로 만들어 보세요.
"""
# 방법 1
def sum_n(n):
    if n <= 1:
        return 1
    return n + sum_n(n-1)


num = int(input("n의 값 입력 : "))
print("1부터 %d까지 합 : %d" % (num, sum_n(num)))

# 방법 2

def sum_n(n):
    if n == 0:
        return 0
    return n + sum_n(n-1)


num = int(input("n의 값 입력 : "))
print("1부터 %d까지 합 : %d" % (num, sum_n(num)))
"""


# 4-2. 문제 2의 숫자 n개 중에서 최댓값 찾기를 재귀 호출로 만들어 보세요.      ?????
# 입력 : 숫자가 n개 들어 있는 리스트
# 출력 : 숫자 n개 중 최댓값

def find_max(a, n):
    if n == 1:
        return a[0]

    max_n = find_max(a, n-1)
    if max_n > a[n-1]:
        return max_n
    else:
        return a[n-1]


v = [17, 92, 18, 33, 58, 7, 33, 42]
print("최댓값 :", find_max(v, len(v)))
