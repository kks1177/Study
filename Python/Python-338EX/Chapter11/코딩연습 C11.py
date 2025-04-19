# 코딩연습 C11.py

# C11-1. 다음은 객체지향 방식으로 원의 면적을 구하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
import math

class Circle:
    def __init__(self, r):
        self.r = r

    def get_area(self):
        result = math.pi * self.r * self.r
        return result


radius = float(input("반지름을 입력하세요 : "))

circle1 = Circle(radius)

print("반지름 : %d" % radius)
print("원의 면적 : %.2f" % circle1.get_area())
"""

# C11-2. 다음은 객체지향 방식으로 세 과목 성적의 평균을 구하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
class Scores:
    def __init__(self, name, kor, eng, math):
        self.name = name
        self.kor = kor
        self.eng = eng
        self.math = math

    def get_avg(self):
        sm = self.kor + self.eng + self.math
        avg = sm/3.0
        return avg


s1 = Scores("김성윤", 85, 90, 83)

print("이름 : %s" % s1.name)
print("국어 : %d, 영어 : %d, 수학 : %d" % (s1.kor, s1.eng, s1.math))
print("평균 : %.1f" % s1.get_avg())
"""


# C11-3. 다음은 객체지향 방식으로 두 수의 사칙연산을 계산하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
class Calculator:
    def __init__(self, num1, num2):
        self.num1 = num1
        self.num2 = num2

    def add(self):
        result = self.num1 + self.num2
        print("%d + %d = %d" % (self.num1, self.num2, result))

    def sub(self):
        result = self.num1 - self.num2
        print("%d - %d = %d" % (self.num1, self.num2, result))

    def mul(self):
        result = self.num1 * self.num2
        print("%d x %d = %d" % (self.num1, self.num2, result))

    def div(self):
        result = self.num1 / self.num2
        print("%d / %d = %.2f" % (self.num1, self.num2, result))


a = int(input("첫번째 수를 입력하세요 : "))
b = int(input("두번째 수를 입력하세요 : "))

cal1 = Calculator(a, b)
cal1.add()
cal1.sub()
cal1.mul()
cal1.div()
"""


# C11-4. 다음은 클래스 속성과 인스턴스 속성을 활용하는 예제 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
class Employee:
    count = 0

    def __init__(self, name, position):
        self.name = name
        self.position = position
        Employee.count = Employee.count + 1

    def show_info(self):
        print("이름 : %s, 직위 : %s" % (self.name, self.position))


e1 = Employee("최진영", "대리")
e1.show_info()

e2 = Employee("김수정", "과장")
e2.show_info()

e3 = Employee("정선주", "부장")
e3.show_info()

print("총 직원 : ", Employee.count)
"""


# C11-5. 다음은 클래스의 메소드 오버라이딩을 이용하여 정사각형의 둘레와 면적을 구하는 프로그램이다. 프로그램의 실행 결과는 무엇인가?

class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def length(self):
        print("사각형의 둘레 :", self.width*2 + self.height*2)

    def area(self):
        print("직사각형의 면적 :", self.width * self.height)


class Square(Rectangle):
    def __init__(self, a):
        super().__init__(a, a)

    def area(self):
        print("정사각형의 면적 :", pow(self.width, 2))


s = Square(10)
s.length()
s.area()
