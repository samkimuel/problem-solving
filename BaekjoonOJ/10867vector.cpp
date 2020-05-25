/**
 * @file 10876(vector).cpp
 * @brief 중복 빼고 정렬하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * vector, algorithm 으로 푸는 버전
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool checksum[2001];

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (!checksum[num + 1000])
        {
            v.push_back(num);
            checksum[num + 1000] = true;
        }
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';

    return 0;
}