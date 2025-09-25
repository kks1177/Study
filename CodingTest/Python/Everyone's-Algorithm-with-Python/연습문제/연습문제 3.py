# 연습문제 3.py

# 3-1. n명 중 두 명을 뽑아 짝을 짓는다고 할 때 짝을 지을 수 있는 모든 조합을 출력하는 알고리즘을 만들어 보세요.
# 예를 들어 입력이 리스트 ["Tom", "Jerry", "Mike"]라면 다음과 같은 세 가지 경우를 출력합니다.

def find_same_name(a):
    for i in range(0, len(a)-1):
        for j in range(i+1, len(a)):
            print(a[i], "-", a[j])


name = ["Tom", "Jerry", "Mike"]
find_same_name(name)


# 3-2. 다음 식을 각각 대문자 O 표기법으로 표현해 보세요.
# A : O(1)
# B : O(n)
# C : O(n**2)
# D : O(n**4)
