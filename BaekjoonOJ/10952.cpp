/**
 * @file 10952.cpp
 * @brief A+B - 5
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    while (cin >> a >> b && (a != 0 || b != 0))
    {
        cout << a + b << '\n';
    }

    return 0;
}

/* 
// if문 제거할 수는 없을까??
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;

    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;

        cout << a + b << '\n';
    }

    return 0;
}
*/