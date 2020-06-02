/**
 * @file 10810.cpp
 * @brief 공 넣기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * algorithm - fill 함수
 */

#include <iostream>
#include <algorithm>

using namespace std;

int bucket[101];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int i, j, k;
        cin >> i >> j >> k;
        fill(bucket + i, bucket + j + 1, k);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << bucket[i] << ' ';
    }

    return 0;
}