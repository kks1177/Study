# 11-9.py

class Person:
    def __init__(self, name):
        self.name = name

    def show_info(self):
        print(self.name)


class Student(Person):
    pass


x = Student("홍길동")
x.show_info()
