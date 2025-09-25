# ex 3 heapq.py
'''
힙(Heap) 기능을 위해 heapq 라이브러리 제공
heapq는 다익스트라 최단 경로 알고리즘을 포함해 다양한 알고리즘에서 우선순위 큐 기능을 구현하고자할 때 사용
 - 힙에 원소를 삽입할 때 --> heapq.heappush() 메서드 이용
 - 힙에서 원소를 꺼낼 때 --> heapq.heappop() 메서드 이용

파이썬에서는 최대 힙(Max Heap)을 제공 x
hepaq 라이브러리를 이용하여 최대힙을 구현해야 할 때는 원소의 부호를 임시로 변경하는 방식을 사용
'''

# 힙 정렬(Heap Sort)을 heapq로 구현하는 예제
import heapq

def heapsort(iterable):
    h = []
    result = []

    # 모든 원소를 차례대로 힙에 삽입
    for value in iterable:
        heapq.heappush(h, value)
    # 힙에 삽입된 모든 원소를 차례대로 꺼내어 담기
    for i in range(len(h)):
        result.append(heapq.heappop(h))
    return result


result = heapsort([1, 3, 5, 7, 9, 2, 4, 6, 8, 0])
print(result)
print()


# 최대 힙을 구현하여 내림차순 힙 정렬을 구현하는 예시
#import heapq

def heapsort(iterable):
    h = []
    result = []

    # 모든 원소를 차례대로 힙에 삽입
    for value in iterable:
        heapq.heappush(h, -value)
    # 힙에 삽입된 모든 원소를 차례대로 꺼내어 담기
    for i in range(len(h)):
        result.append(-heapq.heappop(h))
    return result


result = heapsort([1, 3, 5, 7, 9, 2, 4, 6, 8, 0])
print(result)
