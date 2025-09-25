# ex 5 REST API를 호출하여 회원 정보를 처리하는 예시.py
'''
파싱(Parsing) : 특정한 형식으로 저장된 데이터에 접근하여 원하는 정보만 찾아서 가공하는 작업
'''

import requests

# REST API 경로에 접속하여 응답(Response) 데이터 받아오기
target = "https://jsonplaceholder.typicode.com/users"
response = requests.get(url=target)

# 응답(Response) 데이터가 JSON 형식이므로 바로 파이썬 객체로 변환
data = response.json()

# 모든 사용자(user) 정보를 확인하면 이름 정보만 삽입
name_list = []
for user in data:
    name_list.append(user['name'])

print(name_list)
