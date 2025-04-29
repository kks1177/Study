# code6-8.py
# [프로그램 1] 구구단 출력

## 전역 변수 선언 부분 ##
i, k, guguLine = 0, 0, ""

## 메인 코드 부분 ##
for i in range(2, 10):
    guguLine += ("# %d단 #" % i)

print(guguLine)

for i in range(1, 10):
    guguLine = ""
    for k in range(2, 10):
        guguLine += ("%2dX %2d= %2d" % (k, i, k*i))
    print(guguLine)
