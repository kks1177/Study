# code5-7.py
# if~else~if~else문

score = int(input("점수 입력 : "))

if score >= 90:
    print("A")
else:
    if score >= 80:
        print("B")
    else:
        if score >= 70:
            print("C")
        else:
            if score >= 60:
                print("D")
            else:
                print("F")
