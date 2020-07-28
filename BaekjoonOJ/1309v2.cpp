/**
 * @file 1309v2.cpp
 * @brief 동물원 (강의 복습)
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의 1
 * 
 * d[n] : 세로 크기가 n인 동물원을 채우는 방법의 수. 
 * s[n] = d[0] + d[1] + ... + d[n] 
 * 
 * d[i] = d[i-1] + 2*s[i-2] -> 실행시간 O(N)
 */

#include <iostream>

using namespace std;

int d[100001];
int s[100001];

int mod = 9901;

int main()
{
    int n;
    cin >> n;

    d[0] = 1;
    s[0] = 1;
    d[1] = 2;
    s[1] = d[0] + d[1];
    for (int i = 2; i <= n; i++)
    {
        d[i] = d[i - 1] + 2 * s[i - 2];
        s[i] = s[i - 1] + d[i];
        d[i] %= mod;
        s[i] %= mod;
    }

    cout << s[n] << '\n';

    return 0;
}