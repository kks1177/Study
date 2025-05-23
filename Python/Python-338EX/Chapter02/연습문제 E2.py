# 연습문제 E2.py       p 92

# E2-1. 두 개의 변수를 이용하여 10과 20의 합을 구하는 프로그램을 작성하시오.
"""
x = 10
y = 20

print("두 수의 합 : " + str(x + y))
"""

# E2-2. 1번 문제의 실행 결과를 문자열 포맷팅을 이용하여 실행 결과와 같이 출력하는 프로그램을 작성하시오.
"""
x = 10
y = 20

print("%d + %d = %d" % (x, y, (x+y)))
"""

# E2-3. 문자열 연결 연산자(+)와 str() 함수를 이용하여 2번 문제와 동일한 결과를 얻는 프로그램을 작성하시오.
"""
x = 10
y = 20

print(str(x) + " + " + str(y) + " = " + str(x + y))
"""

# E2-4. 본인이 좋아하는 두 개의 과일 이름을 키보드로 입력받아 실행 결과와 같이 출력하는 프로그램을 작성하시오. 단, print() 함수를 이용 시 콤마(,)를 이용해야 함.
"""
fruit1 = input("첫 번째 과일을 입력하세요 : ")
fruit2 = input("두 번째 과일을 입력하세요 : ")

print(fruit1, "와(과)", fruit2, "은(는) 내가 좋아하는 과일이다.")
"""

# E2-5. 4번 문제의 실행 결과인 '사과 와(과) 딸기 은(는) 내가 좋아하는 과일이다.' 에서 공백을 없애서 실행 결과와 같이 출력하는 프로그램을 작성하시오. 단, print() 함수 이용 시 키워드 sep을 이용해야 함.
"""
fruit1 = input("첫 번째 과일을 입력하세요 : ")
fruit2 = input("두 번째 과일을 입력하세요 : ")

print(fruit1, "와(과)", fruit2, "은(는) 내가 좋아하는 과일이다.", sep="")
"""


# E2-6. print() 함수 이용 시 문자열 포맷팅을 이용하여 5번 문제와 동일한 결과를 가져오는 프로그램을 작성하시오.
"""
fruit1 = input("첫 번째 과일을 입력하세요 : ")
fruit2 = input("두 번째 과일을 입력하세요 : ")

print("%s와(과) %s은(는) 내가 좋아하는 과일이다." % (fruit1, fruit2))
"""


# E2-7. 키보드로 두 개의 정수를 입력받아 나눗셈을 하는 프로그램을 작성하시오.
"""
a = int(input("첫 번째 숫자를 입력하세요 : "))
b = int(input("두 번째 숫자를 입력하세요 : "))

c = a / b

print(c)
"""


# E2-8. 7번 문제의 계산 결과를 소수 둘째 자리(셋째 자리에서 반올림)까지 구하는 프로그램을 작성하시오.
"""
a = int(input("첫 번째 숫자를 입력하세요 : "))
b = int(input("두 번째 숫자를 입력하세요 : "))

c = a / b

print("%d / %d = %.2f" % (a, b, c))
"""


# E2-9. 키보드로 이메일 주소를 두 개로 나누어 입력받아 문자열을 이용하여 두 주소 사이에 @를 붙여서 출력하는 프로그램을 작성하시오.
"""
email1 = input("이메일 주소 앞 부분은? ")
email2 = input("이메일 도메인 이름은? ")

print("- 이메일 주소 : " + email1, email2, sep="@")
"""


# E2-10. 키보드로 본인의 이름, 주소, 전화번호를 입력받아 화면에 출력하는 프로그램을 작성하시오.
"""
name = input("이름을 입력하세요 : ")
address = input("주소를 입력하세요 : ")
phone = input("전화번호를 입력하세요 : ")

print("- 이름 : " + name)
print("- 주소 : " + address)
print("- 전화번호 : " + phone)
"""


# E2-11. 키보드로 사다리꼴의 윗변의 길이, 밑변의 길이, 높이를 입력받아 사다리꼴의 면적을 구하는 프로그램을 작성하시오. 단, 소수점 첫째 자리까지 구함.
"""
top = int(input("윗변의 길이는? "))
bottom = int(input("밑변의 길이는? "))
height = int(input("높이는? "))

area = (top + bottom) * height / 2

print("- 사다리꼴의 면적 : %.1f" % area)
"""


# E2-12. 속담 '가는 말이 고와야 오는 말이 곱다.' 에서 '오는 말'을 추출하는 프로그램을 작성하시오.
"""
s = "가는 말이 고와야 오는 말이 곱다."

print("- 추출 문자 : " + s[10:14])
"""


# E2-13. 키보드로 열 한자리 숫자를 입력받아 끝에서 두 개의 숫자를 출력하는 프로그램을 작성하시오.
"""
i = input("열 자리의 숫자를 입력하세요 : ")

print("- 추출된 두 숫자 : " + i[-2:])
"""


# S2-1. 입력받은 킬로그램(kg)을 파운드(pound)와 온스(ounce)로 환산하는 프로그램을 작성하시오.
"""
kg = int(input("변환할 킬로그램(kg)은? "))
pound = kg * 2.204623
ounce = kg * 35.273962
print("-----------------------------------------------------------")
print("킬로그램\t파운드\t온스")
print("-----------------------------------------------------------")
print("%d\t\t%.2f\t%.2f" % (kg, pound, ounce))
print("-----------------------------------------------------------")
"""


# S2-2. 하이픈('-')이 포함된 휴대폰 번호를 입력받아 하이픈이 삭제된 번호를 출력하는 프로그램을 작성하시오.
phone1 = input("하이픈(-)이 포함된 11자리의 휴대폰 번호는? ")
phone2 = phone1[0:3] + phone1[4:8] + phone1[9:]

print("- 입력된 휴대폰 번호 : " + phone1)
print("- 하이픈 삭제된 휴대폰 번호 : " + phone2)

