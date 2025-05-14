# code12-1.py
# 클래스의 개념

class Car:
    color = ""
    speed = 0
    
    def upSpeed(self, value):
        self.speed += value
    
    def downSpeed(self, value):
        self.speed -= value
        