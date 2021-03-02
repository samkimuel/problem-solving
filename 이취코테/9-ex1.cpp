/**
 * @file 9-ex1.cpp
 * @brief 간단한 다익스트라 알고리즘
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 시간복잡도 O(V^2)
 */
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define INF 1e9

int n, m, start;
vector<pair<int, int>> graph[100001]; // 각 노드에 연결되어 있는 노드에 대한 정보
bool visited[100001];                 // 방문 여부
int d[100001];                        // 최단 거리 테이블

// 방문하지 않은 노드 중에서 가장 최단 거리가 짧은 노드의 번호를 반환
int getSmallestNode()
{
    int min_value = INF;
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] < min_value && !visited[i])
        {
            min_value = d[i];
            index = i;
        }
    }

    return index;
}

void dijkstra(int start)
{
    d[start] = 0;
    visited[start] = true;
    for (int j = 0; j < graph[start].size(); j++)
    {
        d[graph[start][j].first] = graph[start][j].second;
    }

    for (int i = 0; i < n - 1; i++)
    {
        // 현재 최단 거리가 가장 짧은 노드를 꺼내서 방문 처리
        int now = getSmallestNode();
        visited[now] = true;

        // 현재 노드와 연결된 다른 노드를 확인
        for (int j = 0; j < graph[now].size(); j++)
        {
            int cost = d[now] + graph[now][j].second;

            // 현재 노드를 거쳐서 다른 노드로 이동하는 거리가 더 짧은 경우
            if (cost < d[graph[now][j].first])
            {
                d[graph[now][j].first] = cost;
            }
        }
    }
}

int main()
{
    cin >> n >> m >> start;

    for (int i = 0; i < m; i++)
    {
        int a, b, c; // a노드에서 b노드로 가는 비용이 c
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }

    fill_n(d, 100001, INF);

    dijkstra(start);

    // 모든 노드로 가기 위한 최단 거리를 출력
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