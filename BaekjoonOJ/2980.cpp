/**
 * @file 2980.cpp
 * @brief 도로와 신호등
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>

using namespace std;

int sign[1001][2] = {
    0,
}; // 0:빨간, 1:초록

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        int n, r, g;
        cin >> n >> r >> g;
        sign[n][0] = r;
        sign[n][1] = g;
    }

    int position = 0;
    int time = 0;
    while (1)
    {
        time++;
        position++;

        // 도착
        if (position == l)
        {
            break;
        }

        // 신호등 없을 때
        if (sign[position][0] == 0)
        {
            continue;
        }

        int total = sign[position][0] + sign[position][1];
        if (time % total < sign[position][0])
        {
            time += sign[position][0] - (time % total);
        }
    }

    cout << time << '\n';

    return 0;
}