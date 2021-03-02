/**
 * @file 9-ex3.cpp
 * @brief 플로이드 워셜 알고리즘
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 시간복잡도 O(N^3)
 */
#include <iostream>

using namespace std;

#define INF 1e9

int n, m;
int graph[501][501];

int main()
{
    cin >> n >> m;

    // 최단 거리 테이블을 모두 무한으로 초기화
    for (int i = 0; i < 501; i++)
    {
        fill(graph[i], graph[i] + 501, INF);
    }

    // 자기 자신에서 자기 자신으로 가는 비용 0으로
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                graph[i][j] = 0;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        graph[a][b] = c;
    }

    // 점화식에 따라 플로이드 워셜 알고리즘 수행
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]);
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (graph[i][j] == INF)
            {
                cout << "INFINITY" << ' ';
            }
            else
            {
                cout << graph[i][j] << ' ';
            }
        }
        cout << '\n';
    }

    return 0;
}