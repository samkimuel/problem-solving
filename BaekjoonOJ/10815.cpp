/**
 * @file 10815.cpp
 * @brief 숫자 카드
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. set -> find 로 찾기 => 시간초과
 * 2. vector -> sort -> binary search(algorithm) => 시간초과?
 * 3. array -> sort -> binary search(algorithm) => 시간초과???
 * 
 * 왜이러지? 하고 봤더니 stream 동기화 해제, untie 안해서...힝히이힝히이히잉 3번에 해당 코드 추가하고 통과
 * 
 * 나는 바보입니다
 */

#include <iostream>
#include <algorithm>

using namespace std;

int card[500001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> card[i];
    }
    sort(card, card + n);

    int m;
    cin >> m;
    while (m--)
    {
        int num;
        cin >> num;
        bool result = binary_search(card, card + n, num);
        result ? cout << 1 << ' ' : cout << 0 << ' ';
    }
    cout << '\n';

    return 0;
}