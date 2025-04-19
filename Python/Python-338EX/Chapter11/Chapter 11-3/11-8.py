# 11-8.py

class Members:
    total = 0

    def __init__(self, name, age):
        self.name = name
        self.age = age
        Members.total += 1

    def show_info(self):
        print("이름 : %s, 나이 : %d" % (self.name, self.age))


m1 = Members("홍성지", 12)
m2 = Members("강동욱", 23)
m3 = Members("신진서", 32)

m1.show_info()
m2.show_info()
m3.show_info()

print("총 회원 수 :", Members.total)
