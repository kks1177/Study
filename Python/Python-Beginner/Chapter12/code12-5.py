# code12-5.py
# [프로그램 1] 객체지향 개념 적용

## 클래스 선언 부분 ##
class Car:
    name = ""
    speed = 0
    
    def __init__(self, name, speed):
        self.name = name
        self.speed = speed
        
    def getName(self):
        return self.name
    def getSpeed(self):
        return self.speed
    
## 변수 선언 부분 ##
car1, car2 = [None] * 2

## 메인 코드 부분 ##
car1 = Car("아우디", 0)
car2 = Car("벤츠", 30)

print("%s의 현재 속도는 %dkm입니다." % (car1.getName(), car1.getSpeed()))
print("%s의 현재 속도는 %dkm입니다." % (car2.getName(), car2.getSpeed()))
