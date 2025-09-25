# ex 1 특정 웹 서버로 조회를 요청(GET 메서드).py
'''
개발형 코딩 테스트 : 정해진 목적에 따라서 동작하는 완성된 프로그램을 개발하는 것을 요구

서버와 클라이언트의 동작 방식 : 클라이언트가 먼저 요청(Request)을 보냄 -> 서버는 응답(Response)을 하는 방식으로 동작
 정보를 요청하는 측이 클라이언트, 요청을 받아 응답하는 측이 서버

서버는 요청 받은 작업을 서버 프로그램으로 실행한 다음, 결과를 클라이언트 프로그램에 응답으로 보내주는 일

HTTP(HyperText Transfer Protocol) : 웹상에서 데이터를 주고받기 위한 프로토콜
HTTP 메서드
 - GET : 특정 데이터의 조회 요청 (페이지 접속, 정보 검색)
 - POST :            생성 요청 (회원가입, 글쓰기)
 - PUT :             수정 요청 (회원 정보 수정)
 - DELETE :          삭제 요청 (회원 정보 삭제)
'''

import requests

target = "http://google.com"
response = requests.get(url=target)     # requests 클래스에 있는 get() 메서드가 특정한 URL에 'GET' 방식으로 접속하라
print(response.text)
