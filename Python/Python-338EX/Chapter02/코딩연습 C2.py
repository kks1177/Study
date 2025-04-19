# 코딩연습 C2.py       p 86

# C2-1
"""
year = input("년은? ")
month = input("월은? ")
day = input("일은? ")

print(year, month, day, sep=".")
"""


# C2-2
"""
width = int(input("사각형의 너비는? "))
height = int(input("사각형의 높이는? "))
length = 2 * width + 2 * height
area = width * height

print("사각형의 너비 : %dcm" % width)
print("사각형의 높이 : %dcm" % height)
print("둘레 길이 : %dcm" % length)
print("면적 : %dcm2" % area)
"""


# C2-3
"""
r = float(input("반지름을 입력하세요 : "))

length = 2 * r * 3.14
area = r * r * 3.14

print("반지름 : %.2f cm" % r)
print("원의 둘레 : %.2f cm" % length)
print("원의 면적 : %.2f cm2" % area)
"""


# C2-4
"""
inch = float(input("인치는? "))

cm = inch * 2.54

print("%.1f inch => %.1f cm" % (inch, cm))
"""


# C2-5
"""
price = int(input("책 값은? "))
discount = int(input("할인율은? "))
delivery = int(input("배송료는? "))

pay = price - (price * (discount/100)) + delivery

print("책 값 : %d원" % price)
print("할인율 : %d" % discount)
print("배송료 : %d원" % delivery)
print("결제 금액 : %d원" % pay)
"""