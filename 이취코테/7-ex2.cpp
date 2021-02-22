/**
 * @file 7-ex2.cpp
 * @brief 재귀 함수로 구현한 이진 탐색
 * @author Sam Kim (samkim2626@gmail.com)
 */
#include <iostream>
#include <vector>

using namespace std;

vector<int> v;

// 재귀 함수
int binarySearch(int target, int start, int end)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (v[mid] == target)
    {
        return mid;
    }
    else if (v[mid] > target)
    {
        return binarySearch(target, start, mid - 1);
    }
    else
    {
        return binarySearch(target, mid + 1, end);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }

    int res = binarySearch(t, 0, n - 1);
    if (res == -1)
    {
        cout << "원소ㄴㄴ" << '\n';
    }
    else
    {
        cout << res + 1 << '\n';
    }

    return 0;
}