# ex5-2_gcd.py
# 유클리드 방식을 이용해 최대공약수를 구하는 알고리즘

'''
최대공약수 구하기
입력 : a, b
출력 : a와 b의 최대공약수
'''

def gcd(a, b):
    # 종료 조건
    if b == 0:
        return a
    return gcd(b, a%b)      # 좀 더 작은 값으로 자기 자신을 호출


print(gcd(1, 5))    # 1
print(gcd(3, 6))    # 3
print(gcd(60, 24))  # 12
print(gcd(81, 27))  # 27
