# 연습문제 E8-2.py

# E8-1. 키보드로 입력 받은 수가 짝수인지 홀수인지를 판별하는 프로그램을 작성하시오.
# 단, 사용자 함수를 사용해야 함.
"""
def even_or_odd(n):
    if n % 2 == 0:
        result = "짝수"
    elif n % 2 == 1:
        result = "홀수"
    else:
        print("잘못된 입력!")

    return result


num = int(input("수를 입력하세요 : "))
msg = even_or_odd(num)
print("%d은(는) %s이다." % (num, msg))
"""


# E8-2. 사용자 함수를 사용해서 1에서 1000까지의 N의 배수의 합계를 구하는 프로그램을 작성하시오.
# 단, N 값은 키보드로 입력 받음.
"""
def sum_besu(n):
    result = 0
    for i in range(1, 1001):
        if i % n == 0:
            result += i
            
    return result


num = int(input("N값을 입력하세요 : "))

total = sum_besu(num)
print("1에서 1000까지의 수 중 %d의 배수 합계 : %d" % (num, total))
"""


# E8-3. 다음의 문자열에서 "/"를 기준으로 단어를 분리하여 글자 수를 카운트하는 프로그램을 작성하시오. 단, 사용자 함수를 사용해야 함.
"""
# 방법 1
def count_char(s):
    arr = s.split("/")

    for i in arr:
        print("%s : %d" % (i, len(i)))


sentence = "강아지/사슴/거북/고릴라/청개구리"

count_char(sentence)
# 방법 2
print("\n# 방법 2")
def count_char(s):
    arr = s.split("/")

    return arr


sentence = "강아지/사슴/거북/고릴라/청개구리"

words = count_char(sentence)

for word in words:
    length = len(word)
    print("%s : %d" % (word, length))
"""


# E8-4. 다음의 리스트에서 요소가 짝수이면 10을 곱하고, 요소가 홀수이면 100을 곱한 값을 요소로 하는 새로운 리스트 num2을 얻는 프로그램을 작성하시오.
# 단, 사용자 함수를 사용해야 함.
"""
def mul_n(numbers):
    arr = []
    for number in numbers:
        if number % 2 == 0:
            arr.append(number * 10)
        else:
            arr.append(number * 100)
            
    return arr


num1 = [2, 6, 3, 8, 7]
print("num1 =", num1)

num2 = mul_n(num1)
print("num2 =", num2)
"""


# S8-1. 선형 탐색을 이용하여 다음의 리스트에서 키보드가 입력 받은 수가 존재하는지를 판별하는 프로그램을 작성하시오.
"""
def find_num(numbers, n):
    for number in numbers:
        if number == n:
            return True

    return False


data = [55, 3, -12, 2, 51, -23, 17, 9, 13, 16, 30, 9]
print(data)

num = int(input("찾고자 하는 수를 입력하세요 : "))

if find_num(data, num):
    print("%d은(는) 리스트에 존재한다." % num)
else:
    print("%d은(는) 리스트에 존재하지 않는다." % num)
"""


# S8-2. S8-1의 문제에 이진 탐색을 적용하여 동일한 결과를 가져오는 프로그램을 작성하시오.
# 단, 리스트 정렬에는 sort() 메소드를 사용함.      ?

def find_num(numbers, n):
    start = 0
    end = len(numbers) - 1

    result = False

    while start <= end:
        mid = (start+end) // 2
        if n == numbers[mid]:
            result = True
            break
        elif n > numbers[mid]:
            start = mid + 1
        else:
            end = mid - 1

    return result


data = [55, 3, -12, 2, 51, -23, 17, 9, 13, 16, 30, 9]
print(data)

data.sort()
num = int(input("찾고자 하는 수를 입력하세요 : "))

if find_num(data, num):
    print("%d은(는) 리스트에 존재한다." % num)
else:
    print("%d은(는) 리스트에 존재하지 않는다." % num)


