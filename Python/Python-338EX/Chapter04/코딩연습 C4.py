# 코딩연습 C4.py

# C4-1. 다음은 for 문을 이용하여 200에서 800까지의 정수 중에서 5의 배수가 아닌 수를 한 줄에 10개씩 출력하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
count = 0

for i in range(200, 801):
    if i % 5 != 0:
        print("%d" % i, end=" ")
        count += 1

        if count % 10 == 0:
            print()
"""


# C4-2.다음은 for 문을 이용하여 센티미터(1~100cm, 1씩 증가)를 밀리미터(mm), 미터(m), 인치(inch)로 환산하는 표를 만드는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
print("-" * 40)
print("    cm    mm    m    inch")
print("-" * 40)

for cm in range(1, 101):
    mm = cm * 10.0
    m = cm * 0.01
    inch = cm * 0.3937
    print("%7d %7.0f %7.2f %7.1f" % (cm, mm, m, inch))

print("-" * 40)
"""


# C4-3. 다음은 for 문을 이용하여 별표(*)로 실행 결과와 같은 트리를 만드는 프로그램이다. 밑줄 친 부부을 채워 프로그램을 완성하시오.
"""
for i in range(1, 11):
    print("*" * i, end="")
    print()
"""


# C4-4. 다음은 C4-3의 프로그램을 수정하여 역삼각형 형태의 트리를 만드는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
for i in range(10):
    print("*" * (10-i), end="")
    print()
"""


# C4-5. 다음은 for 문을 이용하여 키보드로 입력된 숫자에서 홀수의 개수를 카운트하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.      ???
"""
number = input("숫자를 입력하세요 : ")

total = 0

for a in number:
    a = int(a)
    if a % 2 == 1:
        total += 1

print("홀수의 개수 : %d 개" % total)
"""

# c4-6. 다음은 100 ~ 200(2씩 증가)에 대해 킬로그램(kg)을 파운드(pound)와 온스(ounce)로 환산하는 환산 표를 만드는 프로그램이다.
# 밑줄 친 부부을 채워 프로그램을 완성하시오.
"""
print("-" * 50)
print("%7s %7s %7s" % ("킬로그램", "파운드", "온스"))
print("-" * 50)

for kg in range(100, 201, 2):
    pound = kg * 2.204623
    ounce = kg * 35.273962
    print("%8d %8.1f %8.1f" % (kg, pound, ounce))

print("-" * 50)
"""


# C4-7. 다음은 이중 for 문을 이용하여 별표(*)로 실행 결과와 같은 형태를 만드는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
for i in range(5):
    for j in range(10):
        print("*", end=" ")
    print()
"""


# C4-8. 다음은 이중 for 문을 이용하여 숫자로 실행 결과와 같은 형태를 만드는 형태이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.      ???
"""
for i in range(9, 0, -1):
    for j in range(i):
        print(i, end=" ")
    print()
"""


# C4-9. 다음은 while 문을 이용하여 1~100 정수 중 홀수의 누적 합계를 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
n = 1
sum = 0
count = 0

while n <= 100:
    if n % 2 == 1:
        sum += n
        print("%6d" % sum, end="")
        count += 1

        if count % 10 == 0:
            print()

    n += 1
"""


# C4-10. 다음은 while 문을 이용하여 10~100 달러(10씩 증가)에 대한 원화와 유로의 환산표를 만드는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
print("-" * 30)
print("   달러   원화   유로")
print("-" * 30)

dollar = 10

while dollar <= 100:
    won = dollar * 1080
    euro = dollar * 0.81

    print("%7d %8.0f %7.1f" % (dollar, won, euro))

    dollar += 10

print("-" * 30)
"""


# C4-11. 다음은 while 문을 이용하여 영어 문장을 역순으로 하고 공백(" ")을 하이픈("-")으로 변경하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.      ???

sentence = input("문장을 입력해 주세요. : ")

i = len(sentence) - 1

while i >= 0:
    if sentence[i] == " ":
        print("-", end="")
    else:
        print("%s" % sentence[i], end="")

    i = i - 1

