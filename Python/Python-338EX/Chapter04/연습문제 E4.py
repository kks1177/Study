# 연습문제 E4.py

# E4-1. for 문을 이용하여 1~10까지의 수 중에서 홀수를 출력하는 프로그램을 작성하시오.
"""
for a in range(1, 11):
    if a % 2 == 1:
        print(a)
"""


# E4-2. for 문을 이용하여 1~100 까지의 수 중에서 3의 배수의 합을 구하는 프로그램을 작성하시오.
"""
sum = 0

for a in range(1, 101):
    if a % 3 == 0:
       sum += a

print("1~100 까지의 3의 배수 합계 : %d" % sum)
"""


# E4-3. for 문을 이용하여 1~100 까지의 수 중에서 5의 배수를 출력하는 프로그램을 작성하시오.
"""
for a in range(1,101):
    if a % 5 == 0:
        print(a, end=" ")
"""


# E4-4. 3번 문제와 동일한 프로그램인데 다음의 실행 결과에서와 같이 5의 배수를 한줄에 5개씩 출력하는 프로그램을 작성하시오.      ???
""" 
count = 0

for a in range(1, 101):
    if a % 5 == 0:
        print(a, end=" ")
        count += 1

        if count % 5 == 0:
            print()
"""


# E4-5. for 문을 이용하여 1~100 까지의 수 중에서 4의 배수의 누적 합계를 구하는 프로그램을 작성하시오.
"""
sum = 0

for a in range(1,101):
    if a % 4 == 0:
        sum += a

        print("%d --> %d" % (a, sum))
"""


# E4-6. for 문을 이용하여 10!, 즉 10 팩토리얼(1*2*3*...*10)을 구하는 프로그램을 작성하시오.
"""
factorial = 1

for a in range(1, 11):
    factorial *= a

print("10! = %d" % factorial)
"""


# E4-7. 6번 문제와 동일한 결과를 가져오는 프로그램을 while 문을 이용하여 작성하시오.       ???
"""
factorial = 1
a = 1

while a <= 10:
    factorial *= a
    
    a += 1

print("10! = %d" % factorial)
"""


# E4-8. for 문을 사용하여 1~50cm (1씩 증가)에 대해 길이 환산표(cm, mm, m, inch)를 만드는 프로그램을 작성하시오.
"""
print("-" * 40)
print("   cm      mm      m      inch")
print("-" * 40)

for cm in range(1, 51):
    mm = cm * 10.0
    m = cm * 0.01
    inch = cm * 0.3937

    print("%8d %8.0f %8.2f %8.2f" % (cm, mm, m, inch))

print("-" * 40)
"""


# E4-9. 8번 문제와 동일한 결과를 가져오는 프로그램을 while 문을 이용하여 작성하시오.      ???
"""
print("-" * 40)
print("   cm      mm      m      inch")
print("-" * 40)

cm = 1

while cm <= 50:
    mm = cm * 10.0
    m = cm * 0.01
    inch = cm * 0.3937

    print("%8d %8.0f %8.2f %8.2f" % (cm, mm, m, inch))

    cm += 1

print("-" * 40)
"""


# S4-1. while 문을 이용하여 1~1000까지의 수 중에서 3의 배수가 아닌 수를 출력하는 프로그램을 작성하시오.
# 단, 한 줄에 10개씩 출력함.     ???
"""
count = 0
a = 1

while a <= 1000:
    if a % 3 != 0:
        print("%d" % a, end=" ")
        count += 1

        if count % 10 == 0:
            print()

    a += 1
"""


# S4-2. 성적을 입력받아 등급(수:90점 이상, 우:80점 이상, 미:70점 이상, 양:60점 이상, 가:60점 미만)을 판정하는 프로그램을 작성하시오.
# 단, 'q'를 입력하면 프로그램이 종료됨.           ???
"""
score = int(input("성적을 입력하세요 : "))

while score != "q":
    if score >= 90:
        print("등급 : 수")
    elif score >= 80:
        print("등급 : 우")
    elif score >= 70:
        print("등급 : 미")
    elif score >= 60:
        print("등급 : 양")
    else:
        print("등급 : 가")

    x = input("계속하시겠습니까?(중단:q, 계속:y) ")
    if x == "q":
        break

    score = int(input("성적을 입력하세요 : "))
"""


# S4-3.범위의 시작 수와 끝 수를 입력 받아 그 범위 내에 있는 소수를 구하는 프로그램을 작성하시오.     ???
"""
start = int(input("시작 수를 입력해주세요 : "))
end = int(input("끝 수를 입력해주세요 : "))

a = start

while a <= end+1:
    prime_yes = True
    for i in range(2, a):
        if a % i == 0:
            prime_yes = False
            break

    if prime_yes:
        print(a, end=" ")

    a += 1
"""

