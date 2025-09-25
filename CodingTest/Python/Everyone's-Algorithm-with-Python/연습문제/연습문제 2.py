# 연습문제 2.py

# 2-1. 숫자 n개를 리스트로 입력받아 최솟값을 구하는 프로그램을 만들어 보세요.

def find_min(a):
    min_v = a[0]
    for i in range(1, len(a)):
        if a[i] < min_v:
            min_v = a[i]
    return min_v


v = []
n = int(input("리스트 인덱스 수 입력 : "))
for i in range(0, n):
    idx = int(input("%d번째 인덱스 값 입력 : " % i))
    v.append(idx)

print("최솟값 :", find_min(v))
