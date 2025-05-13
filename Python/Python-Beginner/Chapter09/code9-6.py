# code9-6.py
# 지역 변수와 전역 변수의 이해

## 함수 선언 부분 ##
def func1():
    a = 10      # 지역 변수
    print("func1()에서 a의 값은 %d" % a)
    
def func2():
    print("func2()에서 a의 값은 %d" % a)
    
## 전역 변수 선언 부분 ##
a = 20      # 전역 변수

## 메인 코드 부분 ##
func1()
func2()
