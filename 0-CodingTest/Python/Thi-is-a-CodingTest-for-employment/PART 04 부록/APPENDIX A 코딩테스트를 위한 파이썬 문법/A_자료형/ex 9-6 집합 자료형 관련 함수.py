# ex 9-6 집합 자료형 관련 함수.py
'''
하나의 집합 데이터에 값을 추가할 때 add() 함수 이용
여러 개의 값을 한꺼번에 추가하고자 할 때 update() 함수 이용
특정한 값을 제거할 때 remove() 함수 이용
'''

data = set([1, 2, 3])
print(data)

# 새로운 원소 추가
data.add(4)
print(data)

# 새로운 원소 여러 개 추가
data.update([5, 6])
print(data)

# 특정한 값을 갖는 원소 삭제
data.remove(3)
print(data)
