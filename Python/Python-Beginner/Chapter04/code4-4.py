# code4-4.py
# 시프트 연산자

a = 100
result = 0
i = 0

for i in range(1, 5):
    result = a << i
    print("%d << %d = %d" % (a, i, result))

for i in range(1, 5):
    result = a >> i
    print("%d >> %d = %d" % (a, i, result))
