# code7-8.py
# 딕셔너리의 사용

singer = {}

singer['이름'] = '트와이스'
singer['구성원 수'] = 9
singer['데뷔'] = '서바이벌 식스틴'
singer['대표곡'] = 'SIGNAL'

for k in singer.keys():
    print("%s --> %s" % (k, singer[k]))
    