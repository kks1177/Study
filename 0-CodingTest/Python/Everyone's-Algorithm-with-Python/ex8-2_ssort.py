# ex 8-2_ssort.py
# 일반적인 선택 정렬 알고리즘

'''
선택 정렬
입력 : 리스트 a
출력 : 없음 (입력으로 주어진 a가 정렬됨)
'''

def sel_sort(a):
    n = len(a)
    for i in range(0, n-1):         # 0부터 n-2까지 반복
        min_idx = i

        for j in range(i+1, n):     # i번 위치부터 끝까지 자료 값 중 최솟값의 위치를 찾음
            if a[j] < a[min_idx]:
                min_idx = j

        a[i], a[min_idx] = a[min_idx], a[i]     # 찾은 최솟값을 i번 위치로


d = [2, 4, 5, 1, 3]
sel_sort(d)
print(d)

