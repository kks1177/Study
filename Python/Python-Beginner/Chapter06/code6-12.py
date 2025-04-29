# code6-12.py
# 반복문을 탈출시키는 break문

hap = 0
a, b = 0, 0

while True:
    a = int(input("더할 첫 번째 수 입력 : "))
    if a == 0:
        break
    b = int(input("더할 두 번째 수 입력 : "))
    hap = a + b
    print("%d + %d = %d" % (a, b, hap))

print("0을 입력해 반복문 탈출")
