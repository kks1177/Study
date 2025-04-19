# 코딩연습.py

# C8-1. 다음은 ex8-6와 동일한 프로그램을 실행 결과에서와 같이 출력하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def square_sum(n):
    sm = 0
    for i in range(1, n+1):
        sm += (i*i*i)
        print("%d*%d*%d" % (i, i, i), end=" ")

        if i == n:
            print("= ", end="")
        else:
            print("+ ", end="")
    print(sm)


N = int(input("N의 값을 입력하세요 : "))
square_sum(N)
"""


# C8-2. 다음은 1~N의 수 중에서 홀수의 세제곱 합을 구하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def square_sum(n):
    sm = 0
    for i in range(1, n+1):
        if i % 2 == 1:
            sm += (i*i*i)
            print("%d*%d*%d " % (i, i, i), end="")

            if i == n or i == (n-1):
                print("= ", end="")
            else:
                print("+ ", end="")
    print(sm)


N = int(input("N의 값을 입력하세요 : "))
square_sum(N)
"""


# C8-3. 다음은 예제 8-7에 키보드로 입력받는 부분을 추가하여 입력된 단어가 회문인지를 판별하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def is_palindrome(s):
    for i in range(0, int(len(s)/2)):
        if s[i] != s[len(s)-i-1]:
            return False

    return True


string = input("단어를 입력하세요 : ")

if is_palindrome(string):
    print("%s은(는) 회문이다!" % string)
else:
    print("%s은(는) 회문이 아니다!" % string)
"""


# C8-4. 다음은 영어(또는 한글) 문장을 입력 받아 문장 내에 있는 단어의 개수를 카운트하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def count_word(s):
    arr = s.split(" ")

    return len(arr)


string = input("문장을 입력하세요 : ")

num_word = count_word(string)
print("단어의 개수 :", num_word)
"""


# C8-5. 다음은 영어 문장 "Don't cry before you are the hurt." 내에 있는 특정 단어를 삭제하는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def del_word(s, w):
    arr = s.split(" ")
    arr.remove(w)
    result = " ".join(arr)

    return result


string = "Don't cry before you are the hurt."
word = "the"

new_str = del_word(string, word)
print("원래 문자열 :", string)
print("삭제 단어 :", word)
print("변경된 문자열 :", new_str)
"""


# C8-6. 다음은 선형 탐색을 이용하여 리스트에서 최솟값을 갖는 인덱스를 찾는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.
"""
def find_min(n):
    smallest = n[0]
    for i in range(1, len(n)):
        if n[i] < smallest:
            smallest = n[i]
            
    return smallest


data = [6, 3, -2, 12, 5, -3, 17, 9, 13, 16]
print(data)

min_value = find_min(data)
print("최솟값 :", min_value)
"""


# C8-7. 다음은 예제 8-13의 오름차순이 아닌 내림차순으로 정렬된 리스트에서 특정 요소의 인덱스를 찾는 프로그램이다.
# 밑줄 친 부분을 채워 프로그램을 완성하시오.

def binary_search(n, x):
    start = 0
    end = len(n) - 1

    while start <= end:
        mid = (start+end) // 2
        if x == n[mid]:
            return mid
        elif x > n[mid]:
            end = mid - 1
        else:
            start = mid + 1

    return -1


data = [93, 91, 89, 87, 80, 61, 55, 43, 41, 38, 32, 30, 25, 20, 8, 2]
print(data)

search_num = 89
index = binary_search(data, search_num)
print("%d의 인덱스 번호 : %d" % (search_num, index))
