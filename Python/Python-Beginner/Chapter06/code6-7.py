# code6-7.py
# 중첩 for 문의 활용

i, k = 0, 0

for i in range(2, 10, 1):
    for k in range(1, 10, 1):
        print("%d X %d = %2d" % (i, k, i*k))
    print("")
