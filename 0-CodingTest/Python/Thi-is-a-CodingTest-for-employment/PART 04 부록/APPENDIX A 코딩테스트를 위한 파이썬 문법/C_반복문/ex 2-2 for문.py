# ex 2-2 for문.py
'''
range()의 값으로 하나의 값만을 넣으면, 자동으로 시작 값은 0
주로 리스트나 튜플 데이터의 모든 원소를 첫 번째 인덱스부터 방문해야 할 때 이 방법 사용
'''

scores = [90, 85, 77, 65, 97]

for i in range(5):
    if scores[i] >= 80:
        print(i+1, "번 학생은 합격입니다.")
    
