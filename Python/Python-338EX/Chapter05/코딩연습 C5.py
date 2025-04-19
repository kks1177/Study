# 코딩연습 C5.py

# C5-1. 다음은 list() 함수를 이용하여 1 ~ 20의 양의 정수 리스트를 만든 다음 실행 결과와 같이 출력하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
data = list(range(1, 21))

for i in range(0, len(data)):
    print("%d" % data[i], end=" ")
"""


# C5-2. C5-1의 프로그램을 수정하여 실행 결과에서와 같이 짝수 번째 요소를 출력하는 프로그램을 작성하시오.
# 단, for문을 사용해야 함.
"""
data = list(range(1, 21))

for i in range(0, len(data)):
    if (i+1) % 2 == 0:
        print("%d" % data[i], end=" ")
"""


# C5-3. C5-2의 프로그램을 수정하여 실행 결과에서와 깉이 홀수 번째 요소를 출력하는 프로그램을 작성하시오.
# 단, while문을 사용해야 함.
"""
data = list(range(1, 21))

i = 0
while i < len(data):
    if (i+1) % 2 == 1:
        print("%d" % data[i], end=" ")
    i += 1
"""


# C5-4. 다음은 빈 리스트를 만든 다음 10 ~ 20의 양의 정수를 하나씩 추가하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
data = []

for x in range(10, 21):
    data.append(x)

print(data)
"""


# C5-5. 다음은 리스트와 for문을 이용하여 영어 스펠링 퀴즈를 만드는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
questions = ["s_hool", "compu_er", "deco_ation", "windo_", "hi_tory"]
answers = ["c", "t", "r", "w", "s"]

for i in range(len(questions)):
    q = "%s : 밑줄에 들어갈 알파벳은? " % questions[i]
    guess = input(q)

    if guess == answers[i]:
        print("정답!")
    else:
        print("틀렸어요!")
"""


# C5-6. 다음은 성적을 입력받아 리스트에 저장한 다음 성적의 합계와 평균을 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
scores = []

while True:
    x = int(input("성적을 입력하세요 (종료 시 -1 입력) : "))

    if x == -1:
        break
    else:
        scores.append(x)

sum = 0
for score in scores:
    sum += score

avg = sum / len(scores)
print("합계 : %d, 평균 : %.2f" % (sum, avg))
"""


# C5-7. 다음은 리스트를 이용하여 20명 학생의 성적에 대해 각 등급(수, 우, 미, 양, 가)의 개수를 카운트하는프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
s = [64, 89, 100, 85, 77, 58, 79, 67, 96, 87,
     87, 36, 82, 98, 84, 76, 63, 69, 53, 22]

soo = 0
woo = 0
mi = 0
yang = 0
ga = 0

i = 0
while i < len(s):
    if 90 <= s[i] <= 100:
        soo += 1
    if 80 <= s[i] < 90:
        woo += 1
    if 70 <= s[i] < 80:
        mi += 1
    if 60 <= s[i] < 70:
        yang += 1
    if 0 <= s[i] < 60:
        ga += 1

    i += 1

print("수 : %d명" % soo)
print("우 : %d명" % woo)
print("미 : %d명" % mi)
print("양 : %d명" % yang)
print("가 : %d명" % ga)
"""


# C5-8. 다음은 리스트를 이용하여 영화관의 예약 가능한 좌석에는 '□', 예약 불가능한 좌석은 '■' 이라고 표기하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
seats = [[0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
         [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
         [0, 0, 0, 0, 0, 0, 0, 0, 0, 0],
         [1, 1, 1, 0, 0, 0, 0, 0, 1, 0],
         [0, 0, 0, 0, 0, 1, 0, 0, 0, 0],
         [0, 1, 0, 0, 0, 1, 0, 1, 0, 0],
         [0, 0, 0, 0, 0, 0, 1, 0, 0, 0],
         [1, 0, 1, 0, 0, 0, 0, 0, 0, 1]]

for i in range(len(seats)):
    for j in range(len(seats[i])):
        if seats[i][j] == 0:
            print("%3s" % "□", end="")
        else:
            print("%3s" % "■", end="")
    print()
"""

