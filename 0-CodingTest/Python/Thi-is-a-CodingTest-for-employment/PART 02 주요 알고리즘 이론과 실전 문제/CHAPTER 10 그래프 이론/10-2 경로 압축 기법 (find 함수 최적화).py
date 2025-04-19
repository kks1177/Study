# 10-2 경로 압축 기법 (find 함수 최적화).py
# 경로 압축 (Path Compression) 기법
# 시간 복잡도 개선
# find 함수 재귀적으로 호출 -> 부모 테이블 값을 갱신

def find_parent(parent, x):
    if parent[x] != x:
        parent[x] = find_parent(parent, parent[x])
    return parent[x]
