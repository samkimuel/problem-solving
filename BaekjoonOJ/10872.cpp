/**
 * @file 10872.cpp
 * @brief 팩토리얼
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

// recursive
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // int factorial = 1;
    // for (int i = 1; i < n; i++)
    // {
    //     factorial *= i;
    // }

    cout << factorial(n) << '\n';

    return 0;
}