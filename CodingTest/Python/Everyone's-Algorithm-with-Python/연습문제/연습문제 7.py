# 연습문제 7.py

# 7-1. 프로그램 7-1은 리스트에 찾는 값이 여러 개 있더라도 첫 번째 위치만 결과로 돌려줍니다.
# 찾는 값이 나오는 모든 위치를 리스트로 돌려주는 탐색 알고리즘을 만들어 보세요.
# 찾는 값이 리스트에 없다면 빈 리스트인 []를 돌려줍니다.
"""
def search_list(a, x):
    result = []
    for i in range(0, len(a)):
        if x == a[i]:
            result.append(i)
    return result


v = [17, 92, 18, 33, 58, 7, 33, 42]
print(search_list(v, 18))
print(search_list(v, 33))
print(search_list(v, 900))
"""


# 7-2. 연습문제 7-1 프로그램의 계산 복잡도는 무엇일까요?
# 답 : O(n)


# 7-3. 다음과 같이 학생 번호와 이름이 리스트로 주어졌을 때,
# 학생 번호를 입력하면 학생 번호에 해당하는 이름을 순차 탐색으로 돌려주는 함수를 만들어 보세요.
# 해당하는 학생 번호가 없으면 물음표(?)를 돌려줍니다. 참고로 학생 번호가 39번이면 "Justin", 14번이면 "John"을 돌려줍니다.

def search_student(num, name, id):
    for i in range(0, len(num)):
        if id == num[i]:
            return name[i]
    return "?"


stu_no = [39, 14, 67, 105]
stu_name = ["Justin", "John", "Mike", "Summer"]

student_id = int(input("학번 입력 : "))
print("학번 : %d, 이름 : %s" % (student_id, search_student(stu_no, stu_name, student_id)))

