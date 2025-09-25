# ex 1 내장 함수.py
'''
표준 라이브러리 : 특정한 프로그래밍 언어에서 자주 사용되는 표준 소스코드를 미리 구현해 놓은 라이브러리
 - 내장 함수 : print(), input()과 같은 기본 입출력 기능부터 sorted()와 같은 정렬 기능을 포함하는 내장 라이브러리
 - itertools : 반복되는 형태의 데이터를 처리하는 기능을 제공하는 라이브러리, 순열과 조합 라이브러리 제공
 - heapq : 힙(Heap) 기능 제공 라이브러리
 - bisect : 이진 탐색(Binary Search) 기능 제공 라이브러리
 - collections : 덱(deque), 카운터(Counter) 등의 자료구조 포함하는 라이브러리
 - math : 필수적인 수학적 기능 제공 라이브러리
'''

# sum() 함수
result = sum([1, 2, 3, 4, 5])
print(result)
print()

# min() 함수
result = min(7, 3, 5, 2)
print(result)
print()

# max() 함수
result = max(7, 3, 5, 2)
print(result)
print()

# eval() 함수
# 수학 수식이 문자열 형식으로 들어오면 해당 수식의 결과 반환
result = eval("(3+5) * 7")
print(result)
print()

# sorted() 함수
result = sorted([9, 1, 8, 5, 4])  # 오름차순으로 정렬
print(result)
result = sorted([9, 1, 8, 5, 4], reverse=True)  # 내림차순으로 정렬
print(result)
print()

# key 속성을 이용한 정렬, sorted() 함수
result = sorted([('홍길동', 35), ('이순신', 75), ('아무개', 50)], key=lambda x: x[1], reverse=True)
print(result)
print()

# sort() 함수
data = [9, 1, 8, 5, 4]
data.sort()
print(data)
