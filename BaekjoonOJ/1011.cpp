/**
 * @file 1011.cpp
 * @brief Fly me to the Alpha Centauri
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 다른 분의 풀이 참고함...
 * 핵심은 규칙 찾기! (노가다) - 거리에 따른 이동, 이동 횟수 간의 규칙 찾기
 */
#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        long dist = y - x;

        for (long long i = 1;; i++)
        {
            if ((i * i - i + 1 <= dist) && (dist <= i * i + i)) // !이 문장을 넣지 않으면 시간 초과 발생
            {
                if ((dist >= i * i - i + 1) && (dist <= i * i))
                {
                    cout << 2 * i - 1 << '\n';
                    break;
                }
                else if ((dist >= i * i + 1) && (dist <= i * i + i))
                {
                    cout << 2 * i << '\n';
                    break;
                }
            }
        }
    }

    return 0;
}