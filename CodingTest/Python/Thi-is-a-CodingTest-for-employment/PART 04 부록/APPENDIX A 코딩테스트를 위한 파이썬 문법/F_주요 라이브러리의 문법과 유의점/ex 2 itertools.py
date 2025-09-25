# ex 2 itertools.py
'''
반복되는 데이터를 처리하는 기능을 포함하고 있는 라이브러리
 - permutations
 - combinations
'''

# permutations
# 리스트와 같은 iterable 객체에서 r개의 데이터를 뽑아 일렬로 나열하는 모든 경우(순열)를 계산해줌
from itertools import permutations

data = ['A', 'B', 'C']      # 데이터 준비
result = list(permutations(data, 3))    # 모든 순열 구하기

print(result)
print()


# combinations
# 리스트와 같은 iterable 객체에서 r개의 데이터를 뽑아 순서를 고려하지 않고 나열하는 모든 경우(조합)를 계산해줌
from itertools import combinations

data = ['A', 'B', 'C']      # 데이터 준비
result = list(combinations(data, 2))        # 2개를 뽑는 모든 조합 구하기

print(result)
print()


# product
# permutations와 같이 리스트와 같은 iterable 객체에서 r개의 데이터를 뽑아 나열하는 모든 경우(순열)를 계산
# 다만 원소를 중복해서 뽑음
from itertools import product

data = ['A', 'B', 'C']      # 데이터 준비
result = list(product(data, repeat=2))      # 2개를 뽑는 모든 순열 구하기 (중복 허용)

print(result)
print()

# combinations_with_replacement
# combinations와 같이 리스트와 같은 iterable 객체에서 r개의 데이터를 뽑아 순서를 고려하지 않고 나열하는 모든 경우(조합)를 계산
# 다만 원소를 중복해서 뽑음
from itertools import combinations_with_replacement

data = ['A', 'B', 'C']      # 데이터 준비
result = list(combinations_with_replacement(data, 2))       # 2개를 뽑는 모든 조합 구하기 (중복 허용)

print(result)
