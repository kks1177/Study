# ex 2-1 for문.py
'''
for문에서 수를 차례대로 나열할 때는 range()를 주로 사용
range(시작 값, 끝 값+1)
'''

result = 0

# i는 1부터 9까지의 모든 값을 순회
for i in range(1, 10):
    result += i

print(result)
