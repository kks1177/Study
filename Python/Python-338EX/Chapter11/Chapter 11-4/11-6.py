# 11-6.py

class Student:
    pet = []
    def push_pet(self, x):
        self.pet.append(x)


john = Student()
john.push_pet("고양이")
print(john.pet)

sally = Student()
sally.push_pet("강아지")
print(sally.pet)
