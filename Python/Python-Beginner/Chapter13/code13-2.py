# code13-2.py
# 데이터 조회 프로그램 구현

import sqlite3

## 변수 선언 부분 ##
con, cur = [None] * 2
data1, data2, data3, data4 = "", "", "", ""
row = None

## 메인 코드 부분 ##
con = sqlite3.connect("C:/CookPython/naverDB")
cur = con.cursor()

cur.execute("SELECT * FROM userTable")

print("사용자ID     사용자 이름     이메일      출생연도")
print("------------------------------------------------")

while True:
    row = cur.fetchone()
    if row == None:
        break
    data1 = row[0]
    data2 = row[1]
    data3 = row[2]
    data4 = row[3]
    print("%5s  %15s    %20s    %d" % (data1, data2, data3, data4))
    
con.close()
