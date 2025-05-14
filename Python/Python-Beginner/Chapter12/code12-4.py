# code12-4.py
# 매개변수가 있는 생성자

## 클래스 선언 부분 ##
class Car:
    color = ""
    speed = 0
    
    def __init__(self, value1, value2):
        self.color = value1
        self.speed = value2
        
    # Code12-3.py의 upSpeed(), downSpeed() 함수와 동일
    
## 메인 코드 부분 ##
myCar1 = Car("빨강", 30)
myCar2 = Car("파랑", 60)

print("자동차1의 색상은 %s이며, 현재 속도는 %dkm입니다." % (myCar1.color, myCar1.speed))
print("자동차2의 색상은 %s이며, 현재 속도는 %dkm입니다." % (myCar2.color, myCar2.speed))
