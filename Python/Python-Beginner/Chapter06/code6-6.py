# code6-6.py
# 키보드로 입력한 값까지 합계 구하기

i, dan = 0, 0

dan = int(input("단 입력 : "))

for i in range(1, 10, 1):
    print("%d X %d = %2d" % (dan, i, dan * i))
