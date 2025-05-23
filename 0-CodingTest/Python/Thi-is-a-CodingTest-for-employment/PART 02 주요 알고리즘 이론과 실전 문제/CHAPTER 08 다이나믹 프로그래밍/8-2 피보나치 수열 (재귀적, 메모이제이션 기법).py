# 8-2 피보나치 수열 (재귀적, 메모이제이션 기법).py
# 메모이제이션(Memoization) 기법 : 탑다운(Top-Down) 다이나믹 프로그래밍 기법, 한번 구한 결과를 메모리 공간에 메모,
#  같은 식으로 호출하면 메모한 결과를 그대로 가져오는 기법
# 메모이제이션은 값을 저장하는 방법이므로 캐싱(Caching)이라고도 함

# 한 번 계산된 결과를 메모이제이션(Memoization)하기 위한 리스트 초기화
d = [0] * 100

# 피보나치 함수(Fibonacci Function)를 재귀함수로 구현 (탑다운 다이나믹 프로그래밍)
def fibo(x):
    # 종료 조건 (1 or 2일 때 1을 반환)
    if x == 1 or x == 2:
        return 1

    # 이미 계산한 적 있는 문제라면 그대로 반환
    if d[x] != 0:
        return d[x]
    # 아직 계산하지 않은 문제라면 점화식에 따라서 피보나치 결과 반환
    d[x] = fibo(x-1) + fibo(x-2)
    return d[x]


print(fibo(99))
