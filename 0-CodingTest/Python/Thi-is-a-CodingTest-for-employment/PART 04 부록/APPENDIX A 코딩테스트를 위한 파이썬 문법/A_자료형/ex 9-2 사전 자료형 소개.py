# ex 9-2 사전 자료형 소개.py
# 사전 자료형에 특정한 원소가 있는지 검사할 때는 '원소 in 사전'의 형태를 사용     # --> in 문법

data = dict()
data['사과'] = 'Apple'
data['바나나'] = 'Banana'
data['코코넛'] = 'Coconut'

if '사과' in data:        # --> in 문법
    print("'사과'를 키로 가지는 데이터가 존재합니다.")
