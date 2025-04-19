# 연습문제 E11.py

# E11-1. 다음은 클래스 Calculator로 두 수의 덧셈을 하는 프로그램이다. 프로그램 실행 결과는 무엇인가?
"""
class Calculator:
    a = 10
    b = 20

    def add(self):
        return self.a + self.b


c1 = Calculator()
print(c1.add())
"""


# E11-2. 다음은 E11-1 프로그램을 생성자를 이용하여 재작성한 프로그램이다. 잍줄 친 부분을 채워 프로그램을 완성하시오.
"""
class Calculator:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def add(self):
        return self.a + self.b


c1 = Calculator(10, 20)
print(c1.add())
"""


# E11-3. 클래스를 이용하여 삼각형의 면적을 구하는 프로그램을 작성하시오.
"""
class Triangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height

    def area(self):
        t_area = (self.width * self.height) / 2
        return t_area


t_w = int(input("삼각형 밑변의 길이를 입력하세요 : "))
t_h = int(input("높이를 입력하세요 : "))

t1 = Triangle(t_w, t_h)
print("삼각형의 면적 : %.2f" % t1.area())
"""


# E11-4. 클래스를 이용하여 사다리꼴의 면적을 구하는 프로그램을 작성하시오.
"""
class Ladder:
    def __init__(self, bottom, top, height):
        self.bottom = bottom
        self.top = top
        self.height = height
        
    def area(self):
        l_area = (self.top + self.bottom) / 2 * self.height
        return l_area


l_b = int(input("사다리꼴 밑변의 길이를 입력하세요 : "))
l_t = int(input("윗변의 길이를 입력하세요 : "))
l_h = int(input("높이를 입력하세요 : "))

l1 = Ladder(l_b, l_t, l_h)
print("사다리꼴의 면적 : %.2f" % l1.area())
"""


# E11-5. 다음은 클래스를 이용하여 메모리 버퍼에 데이터를 저장하고 인덱스 번호를 이용하여 데이터를 가져오는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
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


# E11-6. 다음은 클래스의 상속을 이용하여 부모와 아이의 이름을 화면에 출력하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.

class Father:
    def __init__(self, father_name):
        self.father_name = father_name

    def print_father(self):
        print("부모 :", self.father_name)


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


