# ex 6-4_2차원 리스트 컴프리헨션 (잘못된 방법).py
# 특정 크기의 2차원 리스트를 초기화할 때는 반드시 리스트 컴프리헨션을 이용해야 함

# N x M 크기의 2차원 리스트 초기화 (잘못된 방법)
n = 3
m = 4

array = [[0] * m] * n
print(array)

array[1][1] = 5
print(array)
