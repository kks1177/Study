# ex 1-4 함수 람다 표현식.py

def add(a, b):
    return a + b


# 일반적인 add() 메서드 사용
print(add(3, 7))

# 람다 표현식으로 구현한 add() 메서드
print((lambda a, b: a+b)(3, 7))
