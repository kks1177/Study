# 6-11 성적이 낮은 순서로 학생 출력.py

# N을 입력받기
n = int(input())

# N명의 학생 정보를 입력바아 리스트에 저장
array = []
for i in range(n):
    input_data = input().split()
    # 이름은 문자열 그대로, 점수는 정수형으로 변환하여 저장
    array.append((input_data[0], int(input_data[1])))

# 키(Key)를 이용하여, 점수를 기준으로 정렬
array = sorted(array, key=lambda student: student[1])

# 정렬이 수행된 결과 출력
for student in array:
    print(student[0], end=' ')
    