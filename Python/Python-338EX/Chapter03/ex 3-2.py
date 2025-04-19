# ex 3-2.py

age = int(input("나이는? "))
ticket = 2000

if age >= 65:
    ticket = 0

print("나이 : %d세" % age)
print("입장료 : %d원" % ticket)
