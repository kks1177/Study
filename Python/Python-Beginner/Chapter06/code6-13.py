# code6-13.py
# 반복문을 탈출시키는 break문

hap, i = 0, 0

for i in range(1, 101):
    hap += i

    if hap >= 1000:
        break

print("1에서 100까지의 합계를 최초로 1000이 넘는 위치 : %d" % i)
