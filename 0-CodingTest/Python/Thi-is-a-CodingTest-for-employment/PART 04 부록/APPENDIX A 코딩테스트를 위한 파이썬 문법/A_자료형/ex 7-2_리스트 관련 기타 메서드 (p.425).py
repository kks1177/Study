# ex 7-2_리스트 관련 기타 메서드 (p.425).py

a = [1, 2, 3, 4, 5, 5, 5]
remove_set = {3, 5}

# remove_set에 포함되지 않은 값만 저장
# a에 포함된 원소를 하나씩 확인하며 그 원소가 remove_set에 포함되어 있지 않을 때만 리스트 변수 result에 넣음.
result = [i for i in a if i not in remove_set]

print(result)

