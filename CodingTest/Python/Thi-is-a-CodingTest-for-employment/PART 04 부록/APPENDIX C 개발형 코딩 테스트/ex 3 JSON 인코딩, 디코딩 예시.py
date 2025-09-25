# ex 3 JSON 인코딩, 디코딩 예시.py
'''
JSON 인코딩 : 파이썬의 기본 자료형을 JSON 객체로 변환하는 작업을 의미
 json.dumps() 메서드를 이용하면 JSON 객체를 생성 가능

JSON 디코딩 : 인코딩과 반대, JSON 객체를 파이썬의 기본 자료형으로 변환하는 작업
 json.loads() 메서드 이용
'''

import json

# 사전 자료형(dict) 데이터 선언
user = {
    "id": "gildong",
    "password": "192837",
    "age": 30,
    "hobby": ["football", "programming"]
}

# 인코딩 : 파이썬 변수를 JSON 객체로 변환(띄어쓰기 네 칸 들여쓰기 적용)
json_data = json.dumps(user, indent=4)
print(json_data)
print()

# 디코딩 : JSON 객체를 파이썬 변수로 변환
data = json.loads(json_data)
print(data)
