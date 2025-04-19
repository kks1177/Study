# 연습문제 E6.py

# 다음의 딕셔너리 year_sale은 어느 자동차 대리점의 연간 자동차 판매량을 나타낸다. 물음에 답하시오. (E6-1 ~ E6-4)
"""
year_sale = {"2016": 237, "2017": 98, "2018": 158, "2019": 233, "2020": 120}

# E6-1. 다음은 2017년의 자동차 판매량을 구하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
for key in year_sale:
    if key == "2017":
        print("%s년 자동차 판매량 : %d대" % (key, year_sale[key]))

# E6-2. 다음은 2018년과 2019년의 판매량과 2년간 판매량의 합계를 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
sm = 0
for key in year_sale:
    if key == "2018" or key == "2019":
        print("%s년 자동차 판매량 : %d" % (key, year_sale[key]))
        sm += year_sale[key]

print("2년간 자동차 판매량 : %d대" % sm)

# E6-3. 다음은 5년간 전체 판매량을 구하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.
sm = 0
for key in year_sale:
    sm += year_sale[key]

avg = sm / len(year_sale)

print("5년간 총 판매량 : %d대" % sm)
print("5년간 평균 판매량 : %d대" % avg)

# E6-4. 판매량이 가장 많은 해와 그 때의 판매량을 구하는 프로그램을 작성하시오.    ???
big_year = 2016
biggest = year_sale["2016"]
for key in year_sale:
    if year_sale[key] > biggest:
        big_year = key
        biggest = year_sale[key]

print("판매량이 가장 많은 해 : %s년" % big_year)
print("판매량 : %d대" % biggest)
"""


# 딕셔너리 person이 다음과 같이 정의된다. 물음에 답하시오. (E6-5 ~ E6-8)
"""
person = {"name": "홍길동", "age": 30, "family": 5, "children": ["선미", "성진", "소영"], "pets": ["강아지", "고양이", "이구아나"]}

# E6-5. 다음 명령의 실행 결과는?
print(person["age"])

# E6-6. 다음 명령의 실행 결과는?
print(len(person))

# E6-7. 다음 프로그램의 실행 결과는?
for key in person:
    if key == "pets":
        for name in person[key]:
            print(name, end="/")

# E6-8. 딕셔너리 키 "children"의 길이(자녀의 수)를 구하는 프로그램을 작성하시오.

for key in person:
    if key == "children":
        print("자녀 수 : %d명" % len(person[key]))
"""


# 다음은 일주일간 일일 기온을 저장한 딕셔너리 temp에 관한 것이다. 물음에 답하시오. (S6-1 ~ S6-3)
"""
temp = {"월": 15.5, "화": 17.0, "수": 16.2, "목": 12.9, "금": 11.0, "토": 10.5, "일": 13.3}

# S6-1. 딕셔너리 temp에 저장된 데이터를 실행 결과와 같이 출력하는 프로그램을 작성하시오.
print("-" * 70)
for key in temp:
    print("  %s" % key, end="\t")
print()
print("-" * 70)

for key in temp:
    print(" %s" % temp[key], end="\t")
print()
print("-" * 70)

# S6-2. 딕셔너리 temp에서 주중 최저 기온을 가지는 요일과 최저 기온을 실행 결과와 같이 출력하는 프로그램을 작성하시오.
small_day = "월"
smallest = temp["월"]

for key in temp:
    if temp[key] < smallest:
        small_day = key
        smallest = temp[key]

print("요일 : %s, 최저 기온 : %.1f" % (small_day, smallest))

# S6-3. 딕셔너리 temp에서 일주일간 기온 평균을 구하는 프로그램을 작성하시오.
sm = 0
for key in temp:
    sm += temp[key]

avg = sm / len(temp)
print("일주일간 기온 평균 : %.1f" % avg)
"""


