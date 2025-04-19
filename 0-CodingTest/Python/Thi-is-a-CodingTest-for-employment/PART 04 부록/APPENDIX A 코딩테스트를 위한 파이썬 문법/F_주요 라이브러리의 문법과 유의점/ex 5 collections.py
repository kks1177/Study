# ex 5 collections.py
'''
유용한 자료구조를 제공하는 표준 라이브러리
 - deque
 - Counter

리스트 자료형은 append() 메서드로 데이터를 추가 or pop() 메서드로 데이터 삭제할 때, '가장 뒤쪽 원소'를 기준으로 수행

deque는 스택이나 큐의 기능을 모두 포함
 첫번째 원소를 제거할 때 popleft()를 사용
 마지막               pop() 사용
 첫번째 인덱스에 원소 x를 삽입할 때 appendleft(x) 사용
 마지막                        append(x) 사용

deque를 큐 자료구조로 이용할 때, 원소 삽입할 때 append() 사용, 원소 삭제할 때 popleft() 사용
--> 먼저 들어온 원소가 항상 먼저 나감
'''

# deque
from collections import deque

data = deque([2, 3, 4])
data.appendleft(1)
data.append(5)

print(data)
print(list(data))       # 리스트 자료형으로 변환


# Counter
# 등장 횟수를 세는 기능 제공
# 해당 객체 내부의 원소가 몇 번씩 등장했는지를 알려줌
from collections import Counter

counter = Counter(['red', 'blue', 'red', 'green', 'blue', 'blue'])

print(counter['blue'])      # 'blue' 가 등장한 횟수 출력
print(counter['green'])     # 'green' 가 등장한 횟수 출력
print(dict(counter))        # 사전 자료형으로 변환