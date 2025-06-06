# 9-3 플로이드 워셜 최단 경로 알고리즘.py
# 다익스트라 알고리즘 : 한 지점에서 다른 특정 지점까지의 최단 경로를 구해야 하는 경우에 사용
# 플로이드 워셜 알고리즘(Floyd-Warshall Algorithm) : 모든 지점에서 다른 모든 지점까지의 최단 경로를 구해야 하는 경우에 사용

# 다익스트라 알고리즘 : 출발 노드 1개, 최단 거리 저장을 위해 1차원 리스트 이용, 그리디 알고리즘
# 플로이드 워셜 알고리즘 : 2차원 리스트 이용, 다이나믹 프로그래밍
# '바로 이동하는 거리'가 '특정 노드를 거쳐 이동하는 거리' 보다 많은 비용을 가진다면 이를 더 짧은 것으로 갱신

INF = int(1e9)      # 무한을 의미하는 값으로 10억을 설정

# 노드의 개수 및 간선의 개수를 입력받기
n = int(input())
m = int(input())
# 2차원 리스트(그래프 표현)를 만들고, 모든 값을 무한으로 초기화
graph = [[INF] * (n+1) for _ in range(n+1)]

# 자기 자신에서 자기 자신으로 가는 비용은 0으로 초기화
for a in range(1, n+1):
    for b in range(1, n+1):
        if a == b:
            graph[a][b] = 0

# 각 간선에 대한 정보를 입력받아, 그 값으로 초기화
for _ in range(m):
    # A에서 B로 가는 비용은 C라고 설정
    a, b, c = map(int,input().split())
    graph[a][b] = c

# 점화식에 따라 플로이드 워셜 알고리즘 수행
for k in range(1, n+1):
    for a in range(1, n+1):
        for b in range(1, n+1):
            graph[a][b] = min(graph[a][b], graph[a][k] + graph[k][b])

# 수행된 결과를 출력
for a in range(1, n+1):
    for b in range(1, n+1):
        # 도달할 수 없는 경우, 무한(INFINITY)이라고 출력
        if graph[a][b] == INF:
            print("INFINITY", end=" ")
        # 도달할 수 있는 경우 거리를 출력
        else:
            print(graph[a][b], end=" ")
    print()
