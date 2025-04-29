# code6-14.py
# 반복문으로 다시 돌아가게 하는 continue문

hap, i = 0, 0

for i in range(1, 101):
    if i % 3 == 0:
        continue

    hap += i

print("1~100의 합계(3의 배수 제외) : %d" % hap)
