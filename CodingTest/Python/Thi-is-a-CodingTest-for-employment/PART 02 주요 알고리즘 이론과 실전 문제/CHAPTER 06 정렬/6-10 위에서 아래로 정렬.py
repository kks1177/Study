# 6-10 위에서 아래로 정렬.py
# 내림차순으로 정렬
# 수의 개수가 500개 이하, 모든 수는 1 이상 100,000 이하이므로 어떤 정렬 알고리즘을 사용해도 문제 해결 가능
# But, 이 문제에서는 가장 코드가 간결해지는 파이썬 기본 정렬 라이브러리를 이용하는 것이 효과적

# N을 입력받기
n = int(input())

# N개의 정수를 입력받아 리스트 저장
array = []
for i in range(n):
    array.append(int(input()))

# 파이썬 기본 정렬 라이브러리를 이용해 정렬 수행
array = sorted(array, reverse=True)

# 정렬이 수행된 결과 출력
for i in array:
    print(i, end=' ')
    