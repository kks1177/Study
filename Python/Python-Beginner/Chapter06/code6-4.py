# code6-4.py
# 키보드로 입력한 값까지 합계 구하기

i, hap = 0, 0
num = 0

num = int(input("값 입력 : "))

for i in range(1, num + 1, 1):
    hap += i

print("1에서 %d까지의 합계 : %d" % (num, hap))
