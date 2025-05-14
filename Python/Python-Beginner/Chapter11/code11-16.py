# code11-16.py
# 예외 처리 (try, except 문)

num1 = input("숫자1 -->")
num2 = input("숫자2 -->")

try:
    num1 = int(num1)
    num2 = int(num2)
except:
    print("오류 발생!")
else:
    print(num1, '/', num2, '=', num1/num2)
    
finally:
    print("이 부분은 무조건 출력")
    