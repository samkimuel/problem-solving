/**
 * @file 11576.cpp
 * @brief Base Conversion
 * @author Sam Kim (samkim2626@gmail.com)
 * https://www.acmicpc.net/problem/11576
 * 
 * 재귀 방식 생각힘듦ㅠㅠ
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 재귀
// void convert(int num, int base) {
//     if (num == 0) return;
//     convert(num/base, base);
//     cout << num%base << ' ';
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;

    int m;
    cin >> m;

    // A진수를 10진수로
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        ans = ans * a + num;
    }

    // 10진수를 B진수로
    vector<int> v;
    while (ans > 0)
    {
        v.push_back(ans % b);

        ans /= b;
    }
    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }

    // 10진수 -> 재귀
    // convert(ans, b);

    return 0;
}