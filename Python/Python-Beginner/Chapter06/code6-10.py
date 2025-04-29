# code6-10.py
# 무한 루프를 하는 while문

hap = 0
a, b = 0, 0

while True:
    a = int(input("더할 첫 번째 수 입력 : "))
    b = int(input("더할 두 번째 수 입력 : "))

    hap = a + b
    print("%d + %d = %d" % (a, b, hap))
