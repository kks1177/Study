# ex 2 JSON 형식을 따르는 데이터 예시.py
'''
REST API
REST(Representational State Transfer) : 각 자원에 대하여 자원의 상태에 대한 정보를 주고받는 개발 방식
 서버의 자원을 어떠한 방식으로 접근하도록 해야 하는지를 구체적으로 명시한 것
 특히, HTTP 프로토콜을 그대로 사용 -> 웹 or 모바일 개발에서 서버와 클라이언트가 통신하기에 적합한 방식

API : 프로그램(서버, 클라이언트)이 상호작용하기 위한 인터페이스
REST API : REST 아키텍처를 따르는 API
 - 문제에서 'REST API를 제공한다' --> REST 방식으로 개발된 API를 통해 어떠한 데이터를 제공하니 REST 규칙대로 호출하라.

클라이언트 입장에서 REST API 호출 : REST 방식을 따르고 있는 서버에 특정한 요청을 보내서 데이터를 가져오는 것

REST 구성 요소
 1. 자원(Resource) : URI를 이용하여 표현
 2. 행위(Verb) : HTTP 메서드를 이용하여 표현
 3. 표현(Representations)
'''
'''
JSON(JavaScript Object Notation) : 데이터를 주고받는 데 사용하는 경량의 데이터 형식
JSON 데이터는 키-값 쌍으로 이루어진 데이터 객체를 저장
'''

{
    "id": "gildong",
    "password": "192837",
    "age": 30,
    "hobby": ["football", "programming"]
}
