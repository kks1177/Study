# code7-5.py
# 리스트 조작 함수

myList = [30, 10, 20]
print("현재 리스트 : %s" %myList)

myList.append(40)
print("append(40) 후의 리스트 : %s" %myList)

print("pop()으로 추출한 값 : %s" % myList.pop())
print("pop() 후의 리스트 : %s" % myList)

myList.sort()
print("sort() 후의 리스트 : %s" % myList)

myList.reverse()
print("reverse() 후의 리스트 : %s" % myList)

print("20값의 위치 : %s" % myList.index(20))

myList.insert(2, 222)
print("insert(2, 222) 후의 리스트 : %s" % myList)

myList.remove(222)
print("remove(222) 후의 리스트 : %s" % myList)

myList.extend([77, 88, 77])
print("extend([77, 88, 77]) 후의 리스트 : %s" % myList)

print("77값의 개수 : %s" % myList.count(77))
