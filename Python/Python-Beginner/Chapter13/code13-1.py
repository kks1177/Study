# code13-1.py
# 데이터 입력 프로그램 구현

import sqlite3

## 변수 선언 부분 ##
con, cur = [None] * 2
data1, data2, data3, data4 = "", "", "", ""
sql = ""

## 메인 코드 부분 ##
con = sqlite3.connect("C:/CookPython/naverDB")      # DB가 저장된 폴더 지정
cur = con.cursor()

while True:
    data1 = input("사용자 ID ==> ")
    if data1 == "":
        break
    data2 = input("사용자 이름 ==> ")
    data3 = input("이메일 ==> ")
    data4 = input("출생연도 ==> ")
    sql = "INSERT INTO userTable VALUES('" + data1 + "','" + data2 + "','" + data3 + "','" + data4 + ")"
    cur.excecute(sql)
    
con.commit()
con.close()
