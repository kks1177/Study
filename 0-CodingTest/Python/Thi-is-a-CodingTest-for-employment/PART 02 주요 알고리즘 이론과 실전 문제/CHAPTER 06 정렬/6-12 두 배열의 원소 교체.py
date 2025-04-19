# 6-12 두 배열의 원소 교체

n, k = map(int, input().split())        # N과 K 입력받기
a = list(map(int, input().split()))     # 배열 A의 모든 원소 입력받기
b = list(map(int, input().split()))     # 배열 B의 모든 원소 입력받기

a.sort()                # 배열 A는 오름차순으로 절렬 수행
b.sort(reverse=True)    # 배열 B는 내림차순으로 정렬 수행

# 첫 번쨰 인덱스부터 확인하며, 두 배열의 원소를 최대 K번 비교
for i in range(k):
    # A의 원소가 B의 원소보다 작은 경우
    if a[i] < b[i]:
        # 두 원소를 교ㅔ
        a[i], b[i] = b[i], a[i]
    else:       # A의 원소가 B의 원소보다 크거나 같을 때, 반복문 탈출
        break

print(sum(a))   # 배열 A의 모든 원소의 합 출력
