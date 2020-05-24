/**
 * @file 2356.cpp
 * @brief 풍선 터트리기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * deque, pair - 인덱스와 값 모두 필요하기 때문에 pair
 * 처음 시도 메모리 초과 이유 : deque 마지막 원소 일 때를 고려하지 않은 코드 때문
 *  
 * vector, pair 로 푸는 방법도 있음
 */

#include <iostream>
#include <deque>
#include <utility>
#include <cstdlib>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<pair<int, int>> dq;

    for (int i = 1; i <= n; i++)
    {
        int bNum;
        cin >> bNum;
        dq.push_back(make_pair(i, bNum));
    }

    while (!dq.empty())
    {
        int dff = dq.front().first;
        int dfs = dq.front().second;
        cout << dff << ' ';
        dq.pop_front();

        if (dq.size() == 1)
        {
            cout << dq.front().first;
            break;
        }

        if (dfs > 0)
        {
            for (int i = 0; i < dfs - 1; i++)
            {
                pair<int, int> f = dq.front();
                dq.pop_front();
                dq.push_back(f);
            }
        }
        else if (dfs < 0)
        {
            for (int i = 0; i < abs(dfs); i++)
            {
                pair<int, int> b = dq.back();
                dq.pop_back();
                dq.push_front(b);
            }
        }
    }

    return 0;
}