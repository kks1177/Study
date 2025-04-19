# 연습문제 E3.py        p 135

# E3-1. 키보드로 숫자를 입력받아 10보다 큰지를 비교하는 프로그램을 작성하시오.
"""
num = int(input("숫자를 입력하세요 : "))

if num > 10:
    print("%d은(는) 10보다 크다." % num)
else:
    print("%d은(는) 10보다 크지 않다." % num)
"""


# E3-2. 키보드로 입력받은 두 수를 비교하여 실행 결과와 같은 메시지를 출력하는 프로그램을 작성하시오.
"""
num1 = int(input("첫 번째 수를 입력하세요 : "))
num2 = int(input("두 번째 수를 입력하세요 : "))

if num1 > num2:
    print("%d 은(는) %d 보다 크다." % (num1, num2))
elif num1 < num2:
    print("%d 은(는) %d 보다 작다." % (num1, num2))
else:
    print("%d 은(는) %d 와(과) 같다." % (num1, num2))
"""


# E3-3. 숫자를 입력받아 왼쪽에서 세 번째 자리의 수가 짝수인지 홀수인지를 판별하는 프로그램을 작성하시오.      ??
"""
num = input("숫자를 입력하세요 : ")
x = int(num[2])

if x % 2 == 0:
    print("%d은(는) 짝수이다." % x)
else:
    print("%d은(는) 홀수이다." % x)
"""


# E3-4. 두 개의 숫자를 입력받아 두 숫자의 합이 3의 배수인지를 판별하는 프로그램을 작성하시오.
"""
num1 = int(input("첫 번째 숫자를 입력하세요 : "))
num2 = int(input("두 번째 숫자를 입력하세요 : "))

hap = num1 + num2

print("%d + %d = %d" % (num1, num2, hap))

if hap % 3 == 0:
    print("%d은(는) 3의 배수이다." % hap)
else:
    print("%d은(는) 3의 배수가 아니다." % hap)
"""


# E3-5. 나이를 입력받아 평균 나이(35세 기준)와 비교하는 프로그램을 작성하시오.
"""
age = int(input("당신의 나이는? "))

if age >= 35:
    print("당신은 평균 나이(35세) 이상이다.")
else:
    print("당신은 평균 나이(35세) 미만이다.")
"""


# E3-6. 0에서 999까지의 숫자를 입력받아 입력된 숫자의 자리수를 구하는 프로그램을 작성하시오.
"""
num = int(input("수를 입력하세요 : "))

if 0 <= num < 10:
    print("%d 은(는) 한 자리 숫자이다." % num)
elif 10 <= num < 100:
    print("%d 은(는) 두 자리 숫자이다." % num)
elif 100 <= num < 1000:
    print("%d 은(는) 세 자리 숫자이다." % num)
else:
    print("오류! %d 은(는) 범위(0~999) 이외의 숫자이다." % num)
"""


# E3-7. 문자열을 입력받아 문자열의 개수를 출력하고 문자열의 개수가 짝수인지 홀수인지를 판별하는 프로그램을 작성하시오.   ???
"""
a = input("문자열을 입력하세요 : ")

n = len(a)
print("문자열의 개수 : " + str(n))

if n % 2 == 0:
    print("문자열의 개수는 짝수이다.")
else:
    print("문자열의 개수는 홀수이다.")
"""


# E3-8. 두 개의 숫자를 입력받아 사칙연산 기능을 수행하는 프로그램을 작성하시오.
"""
num1 = int(input("첫 번째 숫자를 입력하세요 : "))
num2 = int(input("두 번째 숫자를 입력하세요 : "))

print("원하는 연산은? ")
op = input("+, -, *, / 중 하나를 선택하세요 : ")

if op == "+":
    print("%d + %d = %d" % (num1, num2, num1+num2))
if op == "-":
    print("%d - %d = %d" % (num1, num2, num1-num2))
if op == "*":
    print("%d * %d = %d" % (num1, num2, num1*num2))
if op == "/":
    print("%d / %d = %d" % (num1, num2, num1/num2))
else:
    print("선택 오류!")
"""


# E3-9. 입력받은 성적의 수우미양가 등급을 판정하는 프로그램을 작성하시오. 단, 등급기준은 수:90~100, 우:80~89, 미:70~79, 양:60~69, 가:0~59 이고,
# 그 외의 점수가 입력되었을 때는 '입력 오류!' 메시지를 출력함.
"""
score = int(input("점수를 입력하세요 : "))

if 90 <= score <= 100:
    print("- 성적 : %d, 등급 : 수" % score)
elif 80 <= score < 90:
    print("- 성적 : %d, 등급 : 우" % score)
elif 70 <= score < 80:
    print("- 성적 : %d, 등급 : 미" % score)
elif 60 <= score < 70:
    print("- 성적 : %d, 등급 : 양" % score)
elif 0 <= score < 60:
    print("- 성적 : %d, 등급 : 가" % score)
else:
    print("입력 오류!")
"""


# S3-1. 등급(A+,A,B+, ..., D+,D,F)을 입력받아 평점을 계산하는 프로그램을 작성하시오.
# 단, 평점은 A+:4.5, A:4.0, B+:3.5, B:3.0, C+:2.5, C:2.0, D+:1.5, D:1.0, F:0 으로 계산함.
"""
grade = input("등급을 입력해 주세요(A+,A,B+,...,F) : ")

if grade == "A+":
    print("등급 : %s, 평점 : 4.5" % grade)
elif grade == "A":
    print("등급 : %s, 평점 : 4.0" % grade)
elif grade == "B+":
    print("등급 : %s, 평점 : 3.5" % grade)
elif grade == "B":
    print("등급 : %s, 평점 : 3.0" % grade)
elif grade == "C+":
    print("등급 : %s, 평점 : 2.5" % grade)
elif grade == "C":
    print("등급 : %s, 평점 : 2.0" % grade)
elif grade == "D+":
    print("등급 : %s, 평점 : 1.5" % grade)
elif grade == "D":
    print("등급 : %s, 평점 : 1.0" % grade)
elif grade == "F":
    print("등급 : %s, 평점 : 0" % grade)
else:
    print("입력 오류!")
"""


# S3-2. 두 시간 중 빠른 시간과 늦은 시간을 찾는 프로그램을 작성하시오. 단, 각 시간의 시와 분은 실행결과에서와 같이 키보드로 입력받음.
"""
hour1 = int(input("첫 번째 시간의 시를 입력하세요 : "))
min1 = int(input("첫 번째 시간의 분을 입력하세요 : "))
hour2 = int(input("두 번째 시간의 시를 입력하세요 : "))
min2 = int(input("두 번째 시간의 분을 입력하세요 : "))

if hour1 < hour2:
    first_hour = hour1
    first_min = min1
    second_hour = hour2
    second_min = min2
elif hour1 == hour2:
    if min1 <= min2:
        first_hour = hour1
        first_min = min1
        second_hour = hour2
        second_min = min2
    else:
        first_hour = hour2
        first_min = min2
        second_hour = hour1
        first_min = min1
else:
    first_hour = hour2
    first_min = min2
    second_hour = hour1
    second_min = hour1

print("- 빠른 시간 : %d:%d" % (first_hour, first_min))
print("- 늦은 시간 : %d:%d" % (second_hour, second_min))
"""


# S3-3. 일주일간 일한 시간에 따라 주급을 계산하는 프로그램을 작성하시오.
# 단, 시급은 12,000원, 40시간을 초과한 시간에 대해서는 오버타임을 적용하여 시급의 1.5배로 계산함.  ???
name = input("이름을 입력하세요 : ")
hours = int(input("일주일 간 일한 시간을 입력하세요 : "))

ot_rate = 1.5
hour_pay = 12000

if hours <= 40:
    over_time = 0
    pay = hours * hour_pay
else:
    over_time = hours - 40
    pay = hour_pay * 40 + over_time * hour_pay * ot_rate

print()
print("- 이름 : %s" % name)
print("- 일주일간 일한 시간 : %d" % hours)
print("- 오버타임 : %d시간" % over_time)
print("- 주급 : %d원" % pay)

