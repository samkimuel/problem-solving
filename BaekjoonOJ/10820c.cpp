/**
 * @file 10820c.cpp
 * @brief 문자열 분석 : cstdio
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <cstdio>

int main()
{
    char c;
    int cnt[4] = {0};
    while ((c = getchar()) && c != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            cnt[0]++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            cnt[1]++;
        }
        else if (c >= '0' && c <= '9')
        {
            cnt[2]++;
        }
        else if (c == ' ')
        {
            cnt[3]++;
        }
        else
        {
            printf("%d %d %d %d\n", cnt[0], cnt[1], cnt[2], cnt[3]);
            cnt[0] = cnt[1] = cnt[2] = cnt[3] = 0;
        }
    }

    return 0;
}