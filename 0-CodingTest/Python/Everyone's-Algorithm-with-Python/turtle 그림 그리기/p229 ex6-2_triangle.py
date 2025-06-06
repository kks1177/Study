# p229 ex6-2_triangle.py
# 시에르핀스키의 삼각형을 그리는 프로그램

import turtle as t

def tri(tri_len):
    if tri_len <= 10:
        for i in range(0, 3):
            t.forward(tri_len)
            t.left(120)

        return

    new_len = tri_len / 2
    tri(new_len)
    t.forward(new_len)
    tri(new_len)
    t.backward(new_len)
    t.left(60)
    t.forward(new_len)
    t.right(60)
    tri(new_len)
    t.left(60)
    t.backward(new_len)
    t.right(60)


t.speed(0)
tri(160)
t.hideturtle()
t.done()
