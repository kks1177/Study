# ex18-1_maxprofit.py
# 최대 수익을 구하는 알고리즘 1

'''
주어진 주식 가격을 보고 얻을 수 있는 최대 수익을 구하는 알고리즘
입력 : 주식 가격의 변화 값 (리스트 : prices)
출력 : 한 주를 한번 사고팔아 얻을 수 있는 최대 수의 값
'''

def max_profit(prices):
    n = len(prices)
    max_profit = 0      # 최대 수익은 항상 0 이상의 값

    for i in range(0, n-1):
        for j in range(i+1, n):
            # i 날에 사서 j 날에 팔았을 때 얻을 수 있는 수익
            profit = prices[j] - prices[i]

            # 이 수익이 지금까지 최대 수익보다 크면 값을 고침1침
           if profit > max_profit:
                max_profit = profit

    return max_profit


stock = [10300, 9600, 9800, 8200, 7800, 8300, 9500, 9800, 10200, 9500]
print(max_profit(stock))
