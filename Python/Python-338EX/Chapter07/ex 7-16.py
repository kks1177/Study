# ex 7-16.py

def func():
    global x
    x = 200
    print(x)

x = 100
print(x)
func()
print(x)
