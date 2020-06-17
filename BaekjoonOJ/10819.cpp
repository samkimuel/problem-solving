/**
 * @file 10819.cpp
 * @brief 차이를 최대로
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 순열 - permutation
 * sort 해야 함 : next_permutation은 단순히 인자로 넘어왔을 때의 상황만 보고, 다음 순서에 해당하는 순열을 반환해주기 때문에 정렬되지 않은 container를 조작할 때에는 모든 순열을 반환받을 수 없습니다.
 */

#include <iostream>
#include <algorithm>

using namespace std;

int a[8];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    int maxSum = 0;
    do
    {
        int tmpSum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            tmpSum += abs(a[i] - a[i + 1]);
        }
        maxSum = max(tmpSum, maxSum);

    } while (next_permutation(a, a + n));

    cout << maxSum << '\n';

    return 0;
}