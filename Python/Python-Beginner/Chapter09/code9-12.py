# code9-12.py
# 매개변수의 개수를 지정하지 않고 전달하는 방법

## 함수 선언 부분 ##
def para_func(*para):
    result = 0
    for num in para:
        result += num
        
    return result

## 전역 변수 선언 부분 ##
hap = 0

## 메인 코드 부분 ##
hap = para_func(10, 20)
print("매개변수가 2개인 함수를 호출한 결과 ==> %d" % hap)

hap = para_func(10, 20, 30)
print("매개변수가 3개인 함수를 호출한 결과 ==> %d" % hap)
