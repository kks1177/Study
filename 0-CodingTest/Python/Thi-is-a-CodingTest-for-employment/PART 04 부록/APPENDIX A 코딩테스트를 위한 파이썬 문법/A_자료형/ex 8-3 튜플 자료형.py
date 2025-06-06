# ex 8-3 튜플 자료형.py
# 파이썬의 튜플 자료형은 리스트와 거의 비슷, but 차이가 있음
# 튜플은 한번 선언된 값 변경 x
# 리스트는 대괄호([]), 튜플은 (())

a = (1, 2, 3, 4)
print(a)

a[2] = 7

'''
오류의 내용 >> 원소의 대입(Item Assignment)이 불가능하다 --> 대입 연산자(=)를 사용하여 값 변경이 불가능하다
튜플 자료형은 그래프 알고리즘을 구현할 때 자주 사용
튜플은 리스트에 비해 상대적으로 공간 효율적, 일반적으로 각 원소의 성질이 서로 다를 때 주로 사용
다익스트라 최단 경로 알고리즘에서는 서로 다른 성질의 데이터를 (비용, 노드 번호)의 형태로 함께 튜플로 묶어서 관리
'''