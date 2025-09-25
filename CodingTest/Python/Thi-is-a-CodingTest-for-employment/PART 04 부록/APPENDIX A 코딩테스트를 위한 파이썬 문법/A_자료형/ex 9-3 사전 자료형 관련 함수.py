# ex 9-3 사전 자료형 관련 함수.py
# 키 데이터만 뽑아서 리스트로 이용할 때는 keys() 함수 이용
# 값 데이터만 뽑아서 리스트로 이용할 때는  values() 함수 이용

data = dict()
data['사과'] = 'Apple'
data['바나나'] = 'Banana'
data['코코넛'] = 'Coconut'

# 키 데이터만 담은 리스트
key_list = data.keys()
# 값 데이터만 담은 리스트
value_list = data.values()

print(key_list)
print(value_list)

# 각 키에 따른 값을 하나씩 출력
for key in key_list:
    print(data[key])
