# ex 8-13.py

def binary_search(n, x):
    start = 0
    end = len(n) - 1

    while start <= end:
        mid = (start+end) // 2
        if x == n[mid]:
            return mid
        elif x > n[mid]:
            start = mid - 1
        else:
            end = mid - 1

    return -1


data = [7, 16, 23, 35, 40, 52, 68, 78, 82]
print(data)

search_num = 52
index = binary_search(data, search_num)
print("%d의 위치 : %d" % (search_num, index))
