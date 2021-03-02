/**
 * @file 9-ex2.cpp
 * @brief 개선된 다익스트라 알고리즘
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 시간복잡도 O(ElogV)
 * V는 노드의 개수, E는 간선의 개수
 * 힙 자료구조 사용 (우선순위 큐)
 */
#include <iostream>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

#define INF 1e9

int n, m, start;
vector<pair<int, int>> graph[100001];
int d[100001];

void dijkstra(int start)
{
    priority_queue<pair<int, int>> pq;

    // 시작 노드로 가기 위한 최단 경로는 0으로 설정하여 큐에 삽입
    pq.push({0, start});
    d[start] = 0;
    while (!pq.empty())
    {
        int dist = -pq.top().first; // 현재 노드까지의 비용
        int now = pq.top().second;  // 현재 노드
        pq.pop();

        // 현재 노드가 이미 처리된 적이 있는 노드라면 무시
        if (d[now] < dist)
        {
            continue;
        }

        // 현재 노드와 연결된 다른 인접한 노드들을 확인
        for (int i = 0; i < graph[now].size(); i++)
        {
            int cost = dist + graph[now][i].second;

            // 현재 노드를 거쳐서 다른 노드로 이동하는 거리가 더 짧은 경우
            if (cost < d[graph[now][i].first])
            {
                d[graph[now][i].first] = cost;
                pq.push(make_pair(-cost, graph[now][i].first));
            }
        }
    }
}

int main()
{
    cin >> n >> m >> start;

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    fill(d, d + 100001, INF);

    dijkstra(start);

    for (int i = 1; i <= n; i++)
    {
        if (d[i] == INF)
        {
            cout << "INFINITY" << '\n';
        }
        else
        {
            cout << d[i] << '\n';
        }
    }

    return 0;
}