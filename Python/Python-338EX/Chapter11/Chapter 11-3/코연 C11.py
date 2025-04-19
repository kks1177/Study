# 코연 C11.py

# C11-1.
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


# C11-2.
"""
class Scores:
    def __init__(self, name, kor, eng, math):
        self.name = name
        self.kor = kor
        self.eng = eng
        self.math = math

    def get_avg(self):
        sm = self.kor + self.eng + self.math
        avg = sm / 3.0
        return avg


s1 = Scores("김성윤", 85, 90, 83)

print("이름 : %s", s1.name)
print("국어 : %d, 영어 : %d, 수학 : %d" % (s1.kor, s1.eng, s1.math))
print("평균 : %.1f" % s1.get_avg())
"""


# C11-3.
"""
class Clac:
    def __init__(self, n1, n2):
        self.n1 = n1
        self.n2 = n2

    def add(self):
        result = self.n1 + self.n2
        print("%d + %d = %d" % (self.n1, self.n2, result))

    def sub(self):
        result = self.n1 - self.n2
        print("%d - %d = %d" % (self.n1, self.n2, result))

    def mul(self):
        result = self.n1 * self.n2
        print("%d * %d = %d" % (self.n1, self.n2, result))

    def div(self):
        result = self.n1 / self.n2
        print("%d / %d = %.2f" % (self.n1, self.n2, result))


num1 = int(input("첫번째 수 입력 : "))
num2 = int(input("두번째 수 입력 : "))

c1 = Clac(num1, num2)

c1.add()
c1.sub()
c1.mul()
c1.div()
"""


# C11-4.
"""
class Employee:
    count = 0

    def __init__(self, name, position):
        self.name = name
        self.position = position
        Employee.count += 1

    def show_info(self):
        print("이름 : %s, 직위 : %s" % (self.name, self.position))


e1 = Employee("최진영", "대리")
e1.show_info()
e2 = Employee("김수정", "과장")
e2.show_info()
e3 = Employee("정선주", "부장")
e3.show_info()

print("총 직원 수 : ", Employee.count)
"""


# C11-5.
class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def length(self):
        print("사각형의 둘레 : ", self.width * 2 + self.height * 2)

    def area(self):
        print("직사각형 면적 :", self.width * self.height)


class Square(Rectangle):
    def __init__(self, a):
        super().__init__(a, a)

    def area(self):
        print("정사각형 면적 :", pow(self.width, 2))


s = Square(10)
s.length()
s.area()

