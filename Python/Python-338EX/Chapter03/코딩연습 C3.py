# 코딩연습 C3.py

# C3-1.
"""
start = int(input("시작 수는? "))
end = int(input("끝 수는? "))
num = int(input("정수를 입력하세요 : "))

result = "%d은(는) %d~%d 사이에 없다." % (num, start, end)

if num > start and num < end:
    result = "%d은(는) %d~%d 사이에 있다." % (num, start, end)

print(result)
"""


# C3-2
"""
month = input("월을 숫자로 입력하세요 : " )

if month == "3" or month == "4" or month == "5":
    print("%s월은 봄입니다." % month)

if month == "6" or month == "7" or month == "8":
    print("%s월은 여름입니다." % month)

if month == "9" or month == "10" or month == "11":
    print("%s월은 가을입니다." % month)

if month == "12" or month == "1" or month == "2":
    print("%s월은 겨울입니다." % month)
"""


# C3-3
"""
a = input("주민번호 뒷자리 첫 번째 숫자를 입력해 주세요 : ")

if a == "1" or a == "3":
    print("남성입니다!")

if a == "2" or a == "4":
    print("여성입니다!")
"""


# C3-4
"""
char = input("영문 대문자 또는 소문자 하나를 입력하세요 : ")
char2 = char.upper()

if char2 == "A" or char2 == "E" or char2 == "I" or char2 == "O" or char2 == "U":
    print("%s -> 모음" % char)
else:
    print("%s -> 자음" % char)
"""


# C3-5
"""
height = int(input("키는? "))
weight = int(input("몸무게는? "))

s = (height - 100) * 0.9

print("=" * 50)
print("키 : ", height)
print("몸무게 : ", weight)

if weight > s:
    print("건강을 위해 다이어트가 필요합니다!")
else:
    print("표준 또는 마른 체형입니다!")
"""


# C3-6
"""
print("아르바이트 급여 계산 프로그램")
print("$ 시급")
print("- 주간 근무 : 9,500원")
print("- 야간 근무 : 주간 시급 * 1.5")
print()

hour_pay = 9500

a = int(input("1(주간 근무) 또는 2(야간 근무)을 입력해주세요 : "))
work_time = int(input("근무 시간을 입력해주세요 : "))

if a == 1:
    day_night = "주간"
    pay = hour_pay * work_time
else:
    day_night = "야간"
    pay = hour_pay * work_time * 1.5

print("%d시간 동안 일한 %s 급여는 %d원 입니다." % (work_time, day_night, pay))
"""


# C3-7
"""
spend = int(input("구매 금액은? "))

if 10000 <= spend < 50000:
    rate = 5.0
elif 50000 <= spend < 300000:
    rate = 7.5
elif spend >= 300000:
    rate = 10.0
else:
    rate = 0

discount = spend * rate / 100
pay = spend - discount

print("구매금액 : %.0f" % spend)
print("할인율 : %.1f" % rate)
print("할인금액 : %.0f" % discount)
print("지불금액 : %.0f" % pay)
"""


# C3-8
"""
print("서비스 만족도 : ")
print(" 1: 매우만족")
print(" 2: 만족")
print(" 3: 불만족")
a = input("서비스 만족도는?(1/2/3/) ")
price = int(input("음식 값은? "))

if a == "1":
    tip = int(price * 0.2)
    service = "매우만족"
elif a == "2":
    tip = int(price * 0.1)
    service = "만족"
else:
    tip = 0
    service = "불만족"

print()
print("서비스 만족도 : %s, 팁 : %d원" % (service, tip))
"""


# C3-9
"""
num1 = int(input("첫 번째 정수는? "))
num2 = int(input("두 번째 정수는? "))
num3 = int(input("세 번째 정수는? "))

if num1 >= num2 and num1 >= num3:
    largest = num1
elif num2 >= num1 and num2 >= num3:
    largest = num2
else:
    largest = num3

print("%d, %d, %d 중에서 가장 큰 수는 %d 입니다." % (num1, num2, num3, largest))
"""


# C3-10
"""
userid = input(" 아이디는? ")

if userid == "admin":
    print("콘텐츠 이용이 가능합니다!")
else:
    level = int(input("회원 레벨은?(1~9) "))

    if level >= 1 and level <= 3
        print("콘텐츠 이용이 가능합니다!")
    else:
        print("콘텐츠를 이용할 수 없습니다!")
"""


# C3-11
"""
unit = input("단위를 입력해주세요(1:섭씨, 2:화씨) : ")
temp = int(input("온도를 입력해주세요 : "))

if unit == "2":
    temp = (temp - 32) * 5 / 9

if temp <= 0:
    state = "고체"
elif temp < 100:
    state = "액체"
else:
    state = "기체"

print("물의 섭씨 온도 : %.1f도, 상태 : %s" % (temp, state))
"""


