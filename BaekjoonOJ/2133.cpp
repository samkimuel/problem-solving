/**
 * @file 2133.cpp
 * @brief 타일 채우기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 코드플러스 알고리즘 기초강의 1
 * 
 * d[n] : 3*n 크기의 벽을 1*2, 2*1 타일로 채우는 방법의 수
 * 
 * 1. n이 짝수일 때는 경우의 수가 0 이다
 * 2. 경우의 수가 더 있다는 점 알아두기
 */

#include <iostream>

using namespace std;

int d[31];

int main()
{
    int n;
    cin >> n;

    d[0] = 1;
    for (int i = 2; i <= n; i += 2)
    {
        d[i] = 3 * d[i - 2];
        for (int j = i - 4; j >= 0; j -= 2)
        {
            d[i] += 2 * d[j];
        }
    }

    cout << d[n] << '\n';

    return 0;
}