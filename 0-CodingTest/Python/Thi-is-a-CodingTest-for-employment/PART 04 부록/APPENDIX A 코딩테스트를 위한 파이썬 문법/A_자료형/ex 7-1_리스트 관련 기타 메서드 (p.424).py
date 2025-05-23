# ex 7-1_리스트 관련 기타 메서드 (p.424).py

a = [1, 4, 3]
print("기본 리스트 : ", a)

# 리스트에 원소 삽입
a.append(2)
print("삽입 : ", a)

# 오름차순 정렬
a.sort()
print("오름차순 정렬 : ", a)

# 내림차순 정렬
a.sort(reverse = True)
print("내림차순 정렬 : ", a)

# 리스트 원소 뒤집기
a.reverse()
print("원소 뒤집기 : ", a)

# 특정 인덱스에 데이터 추가
a.insert(2, 3)
print("인덱스 2에 3 추가 : ", a)

# 특정 값인 데이터 개수 세기
print("값이 3인 데이터 개수 : ", a.count(3))

# 특정 값 데이터 삭제
a.remove(1)
print("값이 1인 데이터 삭제 : ", a)
