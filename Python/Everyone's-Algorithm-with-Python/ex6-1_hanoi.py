# ex6-1_hanoi.py
# 하노이의 탑 알고리즘

'''
하노이의 탑
입력 : 옮기려는 원반의 개수 n
      옮길 원반이 현재 있는 출발점 기둥 from_pos
      원반을 옮길 도착점 기둥 to_pos
      옮기는 과정에서 사용할 보조 기둥 aux_pos
출력 : 원반을 옮기는 순서
'''

def hanoi(n, from_pos, to_pos, aux_pos):
    if n == 1:
        print(from_pos, "-->", to_pos)
        return

    hanoi(n-1, from_pos, aux_pos, to_pos)
    print(from_pos, "-->", to_pos)
    hanoi(n-1, aux_pos, to_pos, from_pos)


print("n = 1")
hanoi(1, 1, 3, 2)
print()

print("n = 2")
hanoi(2, 1, 3, 2)
print()

print("n = 3")
hanoi(3, 1, 3, 2)
print()
