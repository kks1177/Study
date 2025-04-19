# ex 1-1 함수.py
# 함수에서 어떠한 값을 반환하고자 할 때, return문 이용

def add(a, b):
    return a + b


print(add(3, 7))


# return문 없이 함수 작성
#  함수 안에서 결과까지 출력하도록 하는 경우 return문 없이 함수 작성
def add(a, b):
    print("함수의 결과 : ", a+b)


add(3, 7)
