# code8-3.py
# 문자열 함수의 사용

ss = input("입력 문자열 ==> ")
print("출력 문자열 ==> ", end='')

if ss.startswith('(') == False:
    print("(", end='')
    
print(ss, end='')

if ss.endswith(')') == False:
    print(")", end='')
    