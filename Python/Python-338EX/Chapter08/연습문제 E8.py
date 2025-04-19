# 연습문제 E8.py

# E8-1. 키보드로 입력 받은 수가 짝수인지 홀수인지를 판별하는 프로그램을 작성하시오. 단, 사용자 함수를 사용해야 함.
"""
def even_or_odd(n):
    if n % 2 == 0:
        print("%d은(는) 짝수이다." % n)
    elif n % 2 == 1:
        print("%d은(는) 홀수이다." % n)
    else:
        print("잘못 입력")


num = int(input("수를 입력하세요 : "))
even_or_odd(num)
"""

# E8-2. 사용자 함수를 사용하여 1에서 1000까지의 N의 배수의 합계를 구하는 프로그램을 작성하시오.
# 단, N 값은 키보드로 입력 받음.    ???
"""
def total_besu(n):
    sm = 0
    for x in range(1, 1001):
        if x % n == 0:
            sm += x

    return sm


N = int(input("N값을 입력하세요 : "))

total = total_besu(N)
print("1에서 1000까지의 수중 %d의 배수 합계 : %d" % (N, total))
"""

# E8-3. 다음의 문자열에서 "/"를 기준으로 단어를 분리하여 글자 수를 카운트하는 프로그램을 작성하시오.
# 단, 사용자 함수를 사용해야 함.        ???
"""
def count_word(s):
    temp = s.split("/")

    return temp


sentence = "강아지/사슴/거북/고릴라/청개구리"

words = count_word(sentence)

for word in words:
    length = len(word)
    print("%s : %d" % (word, length))
"""

# E8-4. 다음의 리스트에서 요소가 짝수이면 10을 곱하고, 요소가 홀수이면 100을 곱한 값을 요소로 하는 새로운 리스트 num2를 얻는 프로그램을 작성하시오.
# 단, 사용자 함술르 사용해야 함.        ???
"""
def get_multi(list1):
    list2 = []
    for x in list1:
        if x % 2 == 0:
            list2.append(x * 10)
        else:
            list2.append(x * 100)

    return list2


num1 = [2, 6, 3, 8, 7]
print("num1 =", num1)
num2 = get_multi(num1)
print("num2 =", num2)
"""

# S8-1. 선형 탐색을 이용하여 다음의 리스트에서 키보드가 입력 받은 수가 존재하는지를 판별하는 프로그램을 작성하시오.
"""
def find_num(numbers, n):
    result = False
    for number in numbers:
        if number == n:
            result = True

    return result


data = [55, 3, -12, 2, 51, -23, 17, 9, 13, 16, 30, 9]
print(data)

num = int(input("찾고자 하는 수를 입력하세요 : "))
if find_num(data, num):
    print("%d은(는) 리스트에 존재한다." % num)
else:
    print("%d은(는) 리스트에 존재하지 않는다." % num)
"""


# S8-2. S8-1의 문제에 이진 탐색을 적용하여 동일한 결과를 가져오는 프로그램을 작성하시오.
# 단, 리스트 정렬에는 sort() 메소드를 사용함.

def find_num(numbers, n):
    start = 0
    end = len(numbers) - 1

    result = False
    while start <= end:
        mid = (start+end)//2

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

