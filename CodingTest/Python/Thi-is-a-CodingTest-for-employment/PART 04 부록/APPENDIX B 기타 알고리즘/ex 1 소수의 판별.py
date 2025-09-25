# ex 1 소수의 판별.py

# 소수 판별 함수
# 시간 복잡도 O(X)
'''
def is_prime_number(x):
    # 2부터 (x-1)까지의 모든 수를 확인하며
    for i in range(2, x):
        # x가 해당 수로 나누어떨어진다면
        if x % i == 0:
            return False        # 소수가 아님
    return True     # 소수임


print(is_prime_number(4))
print(is_prime_number(7))
'''


# 개선된 소수 판별 함수
# 시간 복잡도 O(X1/2)
import math

def is_prime_number(x):
    # 2부터 (x의 제곱근까지의 모든 수를 확인하며
    for i in range(2, int(math.sqrt(x))+1):
        # x가 해당 수로 나누어떨어진다면
        if x % i == 0:
            return False        # 소수가 아님
    return True         # 소수임


print(is_prime_number(4))
print(is_prime_number(7))


