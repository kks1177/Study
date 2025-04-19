# 코딩연습 C7.py

# C7-1. 다음은 함수와 매개변수를 이용하여 두 수의 합을 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def add(a, b):
    c = a + b
    print("%d + %d = %d" % (a, b, c))

add(12, 15)
add(245, 300)
add(-38, -12)
"""


# C7-2. 다음은 함수와 매개변수를 이용하여 정수의 합계를 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def sum_int(start, end):
    total = 0
    for i in range(start, end+1):
        total += i
    print("%d ~ %d 정수 합계 : %d" % (start, end, total))

sum_int(20, 50)
sum_int(600, 800)
"""


# C7-3. 다음은 함수에서 매개변수의 수를 가변으로 해주는 *args를 활용하는 프로그램 예이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def member_join(*args):
    result = ""
    for arg in args:
        result = result + arg + " "

    print("가입 회워 :", result)

member_join("김정연", "안서영")
member_join("황선형", "검철영", "이창연")
member_join("정수진", "김보람", "정수연", "함소영")
"""


# C7-4. 다음은 함수를 이용하여 리스트의 각 요소에 10을 곱하여 다시 리스트에 저장하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def multiply(num, x):
    i = 0
    while i < len(num):
        num[i] *= x

        i += 1

numbers = [10, 20, 30, 40, 50]

multiply(numbers, 10)
print(numbers)

multiply(numbers, 10)
print(numbers)
"""


# C7-5. 다음은 삼각형의 너비와 높이를 입력받아 함수를 이용하여 삼각형의 면적을 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def tri_area(w, h):
    result = w * h * 0.5
    return result

width = int(input("너비를 입력하세요 : "))
height = int(input("높이를 입력하세요 : "))

print(" - 삼각형의 너비 :", width)
print(" - 삼각형의 높이 :", height)
print(" - 삼각형의 면적 :", tri_area(width, height))
"""


# C7-6. 다음은 함수를 이용하여 1부터 100까지의 양의 정수 중 배수의 합계를 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def sum_besu(n):
    sum = 0
    for i in range(1, 101):
        if i % n == 0:
            sum += i

    return sum

besu = int(input("구하고자 하는 배수를 입력하세요 : "))

total = sum_besu(besu)

print("1 ~ 100 사이 %d의 배수의 합계 : %d" % (besu, total))
"""


# C7-7. 다음은 함수를 이용하여 영어 문장에 포함된 공백을 카운트하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def count_space(a):
    count = 0

    for x in a:
        if x == " ":
            count += 1

    return count

sentence = "Python is easy and powerful."

print(sentence)
num_space = count_space(sentence)
print(" - 공백의 개수 :", num_space)
"""


# C7-8. 다음은 사용자 아이디에 따라 딕셔너리에 저장되어 있는 게임 아이템을 가져오는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.

def get_item(userid):
    game_items = {"kim": "총", "lee": "대포", "choi": "전투기", "hwang": "병사"}

    for key in game_items:
        if userid == key:
            item = game_items[key]

    return item

user1 = "kim"
user2 = "hwang"

print("%s의 게임 아이템 : %s" % (user1, get_item(user1)))
print("%s의 게임 아이템 : %s" % (user2, get_item(user2)))
