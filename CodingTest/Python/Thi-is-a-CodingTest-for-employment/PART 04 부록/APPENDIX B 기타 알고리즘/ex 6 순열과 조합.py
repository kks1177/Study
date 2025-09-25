# ex 6 순열과 조합.py
'''
순열(Permutation) : 서로 다른 n개에서 r개를 선택하여 일렬로 나열하는 것, nPr으로도 표현
 순열 경우의 수를 계산하는 공식 : nPr = n! / (n-r)!

파이썬의 itertools 라이브러리의 permutations() 함수 이용
'''

'''
조합(Combination) : 서로 다른 n개에서 순서 상관 없이 서로 다른 r개를 선택하는 것, nCr으로도 표현
 조합 경우의 수를 계산하는 공식 : nCr = n! / r! * (n-r)!
 
파이썬의 itertools 라이브러리의 combinations() 함수 이용
'''

# 순열
import itertools

data = [1, 2, 3]

for x in itertools.permutations(data, 2):
    print(list(x), end=' ')
print()


# 조합
import itertools

data = [1, 2, 3]

for x in itertools.combinations(data, 2):
    print(list(x), end=' ')
