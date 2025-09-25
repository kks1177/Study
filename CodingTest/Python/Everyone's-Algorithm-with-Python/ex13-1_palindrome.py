# ex13-1_palindrome.py
# 회문 찾기 알고리즘

'''
주어진 문장이 회문인지 아닌지 찾기 (큐와 스택의 특징을 이용)
입력 : 문자열 s
출력 : 회문이면 True, 아니면 False
'''

def palindrome(s):
    # 큐와 스택을 리스트로 정의
    qu = []
    st = []

    # 1단계 : 문자열의 알파벳 문자를 각각 큐와 스택에 넣음
    for x in s:
        # 해당 문자가 알파벳이면 (공백, 숫자, 특수문자가 아니면)
        # 큐와 스택에 각각 그 문자를 추가
        if x.isalpha():             # isalpha() : 주어진 문자가 알파벳 문자에 해당하는지 확인, 공백/숫자/특수문자는 이 함수가 걸러냄
            qu.append(x.lower())    # lower() : 주어진 알파벳을 소문자로 바꾸는 기능 수행
            st.append(x.lower())

    # 2단게 : 큐와 스택에 들어 있는 문자를 꺼내면서 비교
    while qu:   # 큐에 문자가 남아 있는 동안 반복
        if qu.pop(0) != st.pop():   # 큐와 스택에서 꺼낸 문자가 다르면 회문이 아님
            return False

    return True


print(palindrome("WoW"))
print(palindrome("Madam, I'm Adam."))
print(palindrome("Madam, I am Adam."))
