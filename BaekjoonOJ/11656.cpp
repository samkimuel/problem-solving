/**
 * @file 11656.cpp
 * @brief 접미사 배열
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * 1. algorithm - sort()
 * 2. cstring - strcmp(a, b) : a<b 이면 return 1, a>b 이면 return -1, a==b 이면 return 0 // param타입이 char*이기 때문에 string->char* 변환위해 c_str()함수 사용
 * 3. string - substr(a, b)/substr(a) : 위치a부터 b개수만큼 문자열반환 / a위치부터 끝까지 반환
 * ps. c_str()은 포인터(주소)를 반환
 */

#include <iostream>
#include <string>
// #include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<string> a;
    for (int i = 0; i < n; i++)
        a.push_back(s.substr(i));
    sort(a.begin(), a.end());

    for (string x : a)
    {
        cout << x << '\n';
    }
    return 0;
}

// 문자열 비교
// bool compare(int u, int v)
// {
//     return strcmp(s.c_str() + u, s.c_str() + v) < 0; // 사전순
// }
