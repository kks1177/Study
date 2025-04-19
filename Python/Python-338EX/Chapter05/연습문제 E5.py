# 연습문제 E5.py

# 다음은 리스트 my_list에 관한 것이다. 물음에 답하시오. (E5-1 ~ E5-4)
"""
my_list = ["p", "y", "t", "h", "o", "n", "i", "s", "f", "u", "n", "!"]

# E5-1. 다음 명령의 실행 결과는?
print(my_list[5:11])

# E5-2. 다음 명령의 실행 결과는?
print(my_list[-5:-2])

# E5-3. 다음 명령의 실행 결과는?
print(my_list[8:])

# E5-4. 다음 명령의 실행 결과는?
print(my_list[:4])
"""


# E5-5. for문을 이용하여 문자열 'I am a genius!"의 각 문자를 요소로 하는 리스트를 생성하여
# 실행 결과와 같이 출력하는 프로그램을 작성하시오.       ?
"""
string = "I am a genius!"

list1 = []
for x in string:
    list1.append(x)

print(list1)
"""


# E5-6. 5번 문제에서 사용된 for문 대신 while문을 사용해서 프로그램을 다시 작성하시오.
"""
string = "I am a genius"

list1 = []

i = 0
while i < len(string):
    list1.append(string[i])

    i += 1

print(list1)
"""


# 다음은 10개의 정수로 구성된 리스트 numbers에 관한 것이다. 물음에 답하시오. (E5-7 ~ E5-9)
"""
numbers = [7, 9, 15, 18, 30, -3, 7, 12, -16, -12]

# E5-7. for문을 이용하여 리스트 numbers 요소들의 합계를 구하는 프로그램을 작성하시오.

sm = 0
for number in numbers:
    sm += number

print("합계 : %d" % sm)


# E5-8. 7번 문제와 동일한 프로그램을 for문 대신 while문을 이용하여 작성해 보시오.

sm = 0

i = 0
while i < len(numbers):
    sm += numbers[i]
    i += 1

print("합계 : %d" % sm)


# E5-9. while문을 이용하여 리스트 numbers의 요소 중 짝수 번째를 출력하고 그 요소들의 합계를 구하는 프로그램을 작성하시오.

sm = 0

i = 0

print("짝수 번째 요소 : ", end="")
while i < len(numbers):
    if (i+1) % 2 == 0:
        sm += numbers[i]
        print(numbers[i], end=" ")
    i += 1

print()
print("합계 : %d" % sm)
"""


# E5-10. 다음은 for문과 range() 함수를 이용하여 문자열을 구성된 리스트에서 요소를 추출하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
fruits = ["사과", "오렌지", "딸기", "수박", "멜론"]

for i in range(len(fruits)):
    print("%d. %s" % ((i+1), fruits[i]))
"""


# 다음은 2차원 리스트 data에 관한 것이다. 물음에 답하시오. (E5-11 ~ E5-12)
"""
data = [[10, 20, 30], [40, 50], [60, 70, 80, 90]]

# E5-11. for문을 이용하여 2차원 리스트 data의 요소를 실행 결과와 깉이 출력하는 프로그램을 작성하시오.

for row in data:
    for x in row:
        print(x, end=" ")
    print()


# E5-12. for문과 range() 함수를 이용하여 2차원 리스트 data의 첫 번째 요소를 실행 결과와 같이 출력하는 프로그램을 작성하시오.

for i in range(len(data)):
    for j in range(len(data)):
        if j == 0:
            print(data[i][j], end=" ")
    print()
"""


# S5-1. 다음은 리스트 file_names에 관한 것이다. for문을 이용하여
# 실행 결과에서와 같이 파일명과 확장자를 분리하는 프로그램을 작성하시오.       # ???
"""
file_names = ["file1.py", "file2.txt", "file3.pptx", "file4.doc"]

for file_name in file_names:
    arr = file_name.split(".")
    print("%s => 파일명 : %s, 확장자 : .%s" % (file_name, arr[0], arr[1]))
"""


# S5-2. 다음은 2차원 리스트 emails를 이용하여 실행 결과와 같이 출력하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.

emails = [["kim", "naver.com"], ["hwang", "hanmail.net"], ["lee", "korea.com"], ["choi", "gamil.com"]]

email_new = []

for email in emails:
    email_new.append(email[0] + "@" + email[1])

print(email_new)
