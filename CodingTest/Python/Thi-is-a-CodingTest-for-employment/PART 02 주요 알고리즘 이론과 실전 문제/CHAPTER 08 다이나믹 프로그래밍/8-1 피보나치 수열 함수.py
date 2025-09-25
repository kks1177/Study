# 8-1 피보나치 수열 함수.py
# 피보나치 수열 : 다이나믹 프로그래밍으로 해결할 수 있는 대표적인 예시

# 피보나치 함수(Fibonacci Function)를 재귀 함수로 구현
def fibo(x):
    if x == 1 or x == 2:
        return 1
    return fibo(x - 1) + fibo(x - 2)


print(fibo(4))
