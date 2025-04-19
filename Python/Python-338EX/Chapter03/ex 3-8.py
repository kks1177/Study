# ex 3-8.py

score = int(input("점수는? "))

if score >= 90:
    garde = "A"
elif score >= 80:
    grade = "B"
elif score >= 70:
    grade = "C"
elif score >= 60:
    grade = "D"
else:
    grade = "F"

print("등급 : ", grade)
