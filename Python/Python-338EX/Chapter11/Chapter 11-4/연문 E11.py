# 연문 E11.py

# E11-1.
"""
class Calc:
    a = 10
    b = 20

    def add(self):
        return self.a + self.b


c1 = Calc()
print(c1.add())
"""


# E11-2.
"""
class Calc:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def add(self):
        return self.a + self.b


c1 = Calc(10, 20)
print(c1.add())
"""


# E11-3.
"""
class Triangle_area:
    def __init__(self, w, h):
        self.w = w
        self.h = h

    def tri_area(self):
        return (self.w * self.h) / 2


width = int(input("삼각형 밑변의 길이 : "))
height = int(input("삼각형 높이의 길이 : "))
t1 = Triangle_area(width, height)

print("삼각형의 면적 : %.2f" % t1.tri_area())
"""


# E11-4.
"""
class Tkekfl:
    def __init__(self, b, t, h):
        self.b = b
        self.t = t
        self.h = h

    def tkekfl_area(self):
        return (self.t + self.b) / 2 * self.h


bottom = int(input("밑변의 길이 입력 : "))
top = int(input("윗변의 길이 입력 : "))
height = int(input("높이 입력 : "))

t1 = Tkekfl(bottom, top, height)
print("사다리꼴의 면적 : %.2f" % t1.tkekfl_area())
"""


# E11-5.
"""
class Buffer:
    def __init__(self):
        self.buffer = []

    def push_data(self, x):
        self.buffer.append(x)

    def get_data(self, index):
        return self.buffer[index]


buffer1 = Buffer()
buffer1.push_data(5)
buffer1.push_data(8)
buffer1.push_data(12)
print(buffer1.buffer)

print(buffer1.get_data(0))
print(buffer1.get_data(2))
"""


# E11-6.
class Father:
    def __init__(self, father_name):
        self.father_name = father_name

    def print_father(self):
        print("부모 : " + self.father_name)


class Child(Father):
    def __init__(self, name1, name2):
        super().__init__(name1)
        self.child_name = name2

    def print_child(self):
        print("아이 : " + self.child_name)


father1 = Father("홍부모")
father1.print_father()
child1 = Child("최부모", "최아이")
child1.print_father()
child1.print_child()
