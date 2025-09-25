# p231 ex6-3_tree.py
# 나무를 그리는 프로그램

import turtle as t

def tree(br_len):
    if br_len <= 5:
        return

    new_len = br_len * 0.7
    t.forward(br_len)
    t.right(20)
    tree(new_len)
    t.left(40)
    tree(new_len)
    t.right(20)
    t.backward(br_len)


t.speed(0)
t.left(90)
tree(70)
t.hideturtle()
t.done()
