# 연습문제 E7.py

# E7-1. 다음 프로그램을 실행하면 오류가 발생한다. 오류가 발생하는 원인에 대해 설명하시오.
"""
def func():
    x = 200

func()
print(x)
# 답 : func()안에서 사용되는 지역변수 x를 메인루틴에서 사용했기 때문
"""

# E7-2. 다음 프로그램의 실행 결과는 무엇인가?
"""
def func():
    x = 200
    print(x)

x = 100
func()
print(x)
"""

# E7-3. 다음 프로그램의 실행 결과는 무엇인가?
"""
def func():
    global x
    x = 200
    print(x)

x = 100
func()
print(x)
"""

# E7-4. 사용자 함수를 정의하여 킬로미터를 마일로 환산하는 프로그램을 작성하시오.
"""
def km_to_mile(x):
    result = km * 0.621371
    return result


km = int(input("킬로미터를 입력하세요 : "))
mile = km_to_mile(km)
print("%d 킬로미터는 %.2f 마일이다." % (km, mile))
"""


# E7-5. 하나 이상의 사용자 함수를 정의하여 다음과 같은 실행 결과를 가져오는 간단한 계산기 프로그램을 작성하시오.
"""
def add(n1, n2):
    result = n1 + n2
    print("%d + %d = %d" % (n1, n2, result))


def sub(n1, n2):
    result = n1 - n2
    print("%d - %d = %d" % (n1, n2, result))


def mul(n1, n2):
    result = n1 * n2
    print("%d * %d = %d" % (n1, n2, result))


def div(n1, n2):
    result = n1 / n2
    print("%d / %d = %.2f" % (n1, n2, result))


print(" - 선택 옵션 ")
print("1. 더하기")
print("2. 빼기")
print("3. 곱하기")
print("4. 나누기")

choice = int(input("원하는 연산을 선택하세요 (1/2/3/4) : "))
num1 = int(input("첫 번째 숫자를 입력하세요 : "))
num2 = int(input("두 번째 숫자를 입력하세요 : "))

if choice == 1:
    add(num1, num2)
elif choice == 2:
    sub(num1, num2)
elif choice == 3:
    mul(num1, num2)
elif choice == 4:
    div(num1, num2)
else:
    print("잘못 입력하였습니다. ")
"""


# E7-6. 사용자 함수를 이용하여 영어 문장에 있는 알파벳의 개수를 카운트하는 프로그램을 작성하시오.
"""
def count_alphabet(string, a):
    count = 0

    for x in string:
        if x == a:
            count += 1

    return count


s = input("영어 문장을 입력하세요 : ")
alphabet = input("알파벳 하나를 입력하세요 : ")

num_char = count_alphabet(s, alphabet)
print("%s 에 포함된 %s 의 개수는 %d 개이다." % (s, alphabet, num_char))
"""


# E7-7. 사용자 함수를 이용하여 튜플 tup1의 합계를 구하는 프로그램을 작성하시오.
"""
def sum_tup(numbers):
    sm = 0
    for number in numbers:
        sm += number
    return sm


tup1 = (10, 20, 30, 40, 50)

total = sum_tup(tup1)
print("튜플의 합계 :", total)
"""


# E7-8. 사용자 함수를 이용하여 입력된 문자열을 역순으로 출력하는 프로그램을 작성하시오.        ???
"""
def str_reverse(s):
    result = ""
    index = len(s)
    while index > 0:
        result += s[index-1]
        index -= 1
    return result


string = input("문자열을 입력하세요 : ")
print(str_reverse(string))
"""


# E7-9. 사용자 함수를 이용하여 입력된 문자열에서 공백을 하이픈(-)으로 치환하는 프로그램을 작성하시오.       ?
"""
def space_to_hyphen(s):
    result = ""
    for i in range(len(s)):
#       result = s.replace(" ", "-")       # 내가 한 방법.. 어캐 됐누..
        if s[i] == " ":
            result += "-"
        else:
            result += s[i]
    return result


string = input("문자열을 입력하세요 : ")
print(space_to_hyphen(string))
"""


# E7-10. 하나 이상의 사용자 함수를 정의하여 다음의 실행 결과를 가져오는 단위 환산표 프로그램을 작성하시오.
"""
def cm_to_inch(c):
    result = c * 0.393701
    return result


def kg_to_pound(k):
    result = k * 2.204623
    return result


print(" - 선택 옵션")
print("1. 길이 환산 (센티미터 --> 인치")
print("2. 무게 환산 (킬로그램 --> 파운드")

choice = int(input("원하는 환산 단위를 선택하세요. (1/2) : "))

if choice == 1:
    cm = int(input("센티미터 단위의 길이를 입력하세요 : "))
    inch = cm_to_inch(cm)
    print("%d 센티미터 --> %.2f 인치" % (cm, inch))
elif choice == 2:
    kg = int(input("킬로그램 단위의 무게를 입력하세요 : "))
    pound = kg_to_pound(kg)
    print("%d 킬로그램 --> %.2f 파운드" % (kg, pound))
else:
    print("잘못 입력하였습니다.")
"""


# S7-1. 사용자 함수를 이용하여 n의 값을 입력받아 2에서 n까지의 정수 중 소수를 구하는 프로그램을 작성하시오.      ???
"""
def isPrimeNumber(num):
    prime_yes = True
    for i in range(2, num):
        if num % i == 0:
            prime_yes = False
            break
    return prime_yes

n = int(input("n값을 입력해주세요 : "))
print("2 ~ %d까지의 정수 중 소수 :" % n, end=" ")
for a in range(2, n+1):
    is_prime = isPrimeNumber(a)
    if is_prime:
        print(a, end=" ")
"""


# S7-2. 딕셔너리 eng_dict를 이용하여 영어 단어 퀴즈 맞추기 프로그램을 작성하시오.
# 단, 사용자 함수를 사용하여야 함.
"""
# 방법 1   내가 한 방법
def match_word(dict):
    for key in dict:
        input_word = input("%s에 맞는 영어 단어는? " % dict[key])
        if input_word == key:
            print("참 잘했어요!")
        else:
            print("틀렸어요!")


eng_dict = {"house": "집", "piano": "피아노", "christmas": "크리스마스", "friend": "친구", "bread": "빵"}

match_word(eng_dict)

# 방법 2
def match_word(word, answer):
    if word == answer:
        result = "참 잘했어요!"
    else:
        result = "틀렸어요!"
    return result


eng_dict = {"house": "집", "piano": "피아노", "christmas": "크리스마스", "friend": "친구", "bread": "빵"}

for i in eng_dict:
    eng_word = input(eng_dict[i] + "에 맞는 영어 단어는? ")
    msg = match_word(eng_word, i)
    print(msg)
"""


# S7-3. 사용자 함수를 이용하여 n의 값을 입력받아 1에서 n까지의 정수의 제곱을 구하는 프로그램을 작성하시오.
"""
def jegob(num):
    result = []
    for i in range(1, num+1):
        result.append(i**2)

    return result


n = int(input("n 값을 입력하세요 : "))

list1 = jegob(n)
print(list1)
"""
