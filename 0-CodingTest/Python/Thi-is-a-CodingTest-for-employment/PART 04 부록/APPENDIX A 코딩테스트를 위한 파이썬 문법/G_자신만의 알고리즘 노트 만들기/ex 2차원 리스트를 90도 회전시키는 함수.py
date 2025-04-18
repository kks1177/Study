# ex 2차원 리스트를 90도 회전시키는 함수.py
'''
라이브러리를 만들 때는 단순히 함수만 작성하는 것보다 해당 함수의 사용 예시(방법) 까지 같이 기록
'''

''' 2차원 리스트(행렬)를 90도 회전하는 메서드 '''
def rotate_a_matrix_by_90_degree(a):
    row_length = len(a)
    column_length = len(a[0])

    res = [[0] * row_length for _ in range(column_length)]
    for r in range(row_length):
        for c in range(column_length):
            res[c][row_length - 1 - r] = a[r][c]

    return res


# 사용 예시
a = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [9, 10, 11, 12]
]

print(rotate_a_matrix_by_90_degree(a))
