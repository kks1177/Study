# code6-5.py
# 키보드로 입력한 값까지 합계 구하기

i, hap = 0, 0
num1, num2, num3 = 0, 0, 0

num1 = int(input("시작값 : "))
num2 = int(input("끝값 : "))
num3 = int(input("증가값 : "))

for i in range(num1, num2+1, num3):
    hap += i

print("%d에서 %d까지 %d씩 증가시킨 값의 합계 : %d" % (num1, num2, num3, hap))
