# code6-11.py
# 무한 루프를 하는 while문

ch = ""
a, b = 0, 0

while True:
    a = int(input("계산할 첫 번째 수 입력 : "))
    b = int(input("계산할 두 번째 수 입력 : "))
    ch = input("계산할 연산자 입력 : ")

    if ch == "+":
        print("%d + %d = %d" % (a, b, a+b))
    elif ch == "-":
        print("%d - %d = %d" % (a, b, a-b))
    elif ch == "*":
        print("%d * %d = %d" % (a, b, a*b))
    elif ch == "/":
        print("%d / %d = %d" % (a, b, a/b))
    elif ch == "%":
        print("%d %% %d = %d" % (a, b, a%b))
    elif ch == "//":
        print("%d // %d = %d" % (a, b, a//b))
    elif ch == "**":
        print("%d ** %d = %d" % (a, b, a**b))
    else:
        print("연산자를 잘못 입력했습니다.")
