/**
 * @file 1152c.cpp
 * @brief 단어의 개수
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * c버전 - scanf("%[^\n]s", s)
 */

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%[^\n]s", s);

    int cnt = 1;
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] == ' ')
        {
            cnt++;
        }
    }

    if (s[0] == ' ')
    {
        cnt--;
    }
    if (s[len - 1] == ' ')
    {
        cnt--;
    }

    printf("%d\n", cnt);

    return 0;
}