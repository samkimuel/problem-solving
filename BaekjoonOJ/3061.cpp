/**
 * @file 3061.cpp
 * @brief 사다리
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * Greedy
 */
#include <iostream>

using namespace std;

int step[1000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> step[i];
        }

        // 정렬 횟수
        int cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (step[i] > step[j])
                {
                    int tmp = step[i];
                    step[i] = step[j];
                    step[j] = tmp;
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}