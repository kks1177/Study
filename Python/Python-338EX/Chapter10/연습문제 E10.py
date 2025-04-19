# 연습문제 E10.py

# E10-1. 다음 그링에서와 같이 본인의 이름, 전화 번호, 이메일 주소를 myfile.txt 파일에 저장하는 프로그램을 작성하시오.
"""
f = open("myfile.txt", "w", encoding="utf-8")
my_info = ["김기성", "010-2481-1177", "0826391@naver.com"]

for info in my_info:
    f.write(info + "\n")

f.close()
"""

# E10-2. 다음은 E10-1에서 사용한 myfile.txt 파일을 읽어들여 주소를 추가하여 다음 그림의 포맷으로 myfile2.txt 파일에 저장하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.      ???
"""
f1 = open("myfile.txt", "r", encoding="utf-8")
f2 = open("myfile2.txt", "w", encoding="utf-8")
lines = f1.readlines()

data = []

for line in lines:
    data.append(line)

name = "이름 : " + data[0]
tel = "전화번호 : " + data[1]
email = "이메일 : " + data[2]

addr = "주소 : 대전 동구 계족로 431번길 31"

f2.write(name)
f2.write(tel)
f2.write(email)
f2.write(addr)

f1.close()
f2.close()
"""

# E10-3. 다음은 12월 총 강수량을 실행 결과와 같이 출력하는 프로그램이다. 밑줄 친 부분을 채워 프로그램을 완성하시오.     ???
"""
import csv

file_name = "weather.csv"
f = open(file_name, "r", encoding="utf-8")
lines = csv.reader(f)

header = next(lines)

sm = 0
for line in lines:
    sm += float(line[5])

print("12월 총 강수량 : %d mm" % sm)

f.close()
"""


# E10-4. 12월 최대 습도 일자와 그 날의 최대 습도를 실행 결과와 같이 출력하는 프로그램을 작성하시오.      ???
"""
import csv

file_name = "weather.csv"
f = open(file_name, "r", encoding="utf-8")
lines = csv.reader(f)

header = next(lines)

max_value = -1000.0

for line in lines:
    if float(line[6] > max_value):
        max_day = line[1]
        max_value = float(line[6])

print("일자 : %s" % max_day)
print("최대 습도 : %.1f %%" % max_value)

f.close()
"""


# E10-5. 12월 일교차를 실행 결과와 같이 출력하는 프로그램을 작성하시오.

import csv

file_name = "weather.csv"
f = open(file_name, "r", encoding="utf-8")

lines = csv.reader(f)

header = next(lines)

print("-" * 50)
print("일자           일교차")
print("-" * 50)

for line in lines:
    diff = float(line[3]) - float(line[4])
    print("%s     %.1f" % (line[1], diff))
print("-" * 30)

f.close()


