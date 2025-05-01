# code7-9.py
# 딕셔너리의 정렬

import operator

trainDic, trainList = {}, []

trainDic = {"Tomas":"토마스", "Edward":"에드워드", "Henry":"헨리", "Gothen":"고든", "James":"제임스"}
trainList = sorted(trainDic.items(), key = operator.itemgetter(0))

print(trainList)
