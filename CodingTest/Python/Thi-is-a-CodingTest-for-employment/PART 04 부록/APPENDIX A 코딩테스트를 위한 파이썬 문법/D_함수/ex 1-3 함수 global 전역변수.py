# ex 1-3 함수 global 전역변수.py
'''
함수 안에서 함수 밖의 변수 데이터를 변경해야 하는 경우,
 함수 안에서 global 키워드 이용.
  glboal 키워드로 변수를 지정할 경우 --> 해당 함수에서는 지역 변수를 만들지 않고, 함수 바깥에 선언된 변수를 바로 참조하게 됨
'''

a = 0


def func():
    global a
    a += 1


for i in range(10):
    func()

print(a)
