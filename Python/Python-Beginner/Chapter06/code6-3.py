# code6-3.py
# for 문을 활용한 합계 구하기

i, hap = 0, 0

for i in range(501, 1001, 2):
    hap += i

print("501에서 1000까지의 홀수의 합계 : %d" % hap)
