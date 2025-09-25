# ex 6_리스트 컴프리헨션
# 리스트 컴프리헨션 : 리스트를 초기화하는 방법 중 하나
# 대괄호([]) 안에 조건문과 반복문을 넣는 방식으로 리스트를 초기화

# 0부터 19까지의 수 중에서 홀수만 포함하는 리스트
array = [i for i in range(20) if i % 2 == 1]

print(array)



# 일반적인 소스코드
'''
array = []
for i in range(20):
    if i % 2 == 1:
        array.append(i)

print(array)
'''
