# ex 7-7.py

def average(*args):
    num_args = len(args)
    sum = 0
    for i in range(num_args):
        sum += args[i]

    avg = sum / num_args
    print("%d 과목 평균 : %.1f" % (num_args, avg))

average(85, 96, 87)
average(77, 93, 85, 97, 72)
