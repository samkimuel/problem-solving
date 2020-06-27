/**
 * @file 2579.cpp
 * @brief 계단 오르기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * d[i] : i개 계단 오르기 게임에서 얻은 총 점수의 최댓값
 * 세 개의 계단을 연속해서 밟지 못함!
 * 전칸이 아닌 !전전칸, 전전전칸!을 생각해야함
 *
 * 나의 오류 : 계단을 밟았는지 안밟았는지에 대한 tag를 생각해서 그것을 이용한 BU방식을 생각했는데 안풀림. 계속 논리가 꼬임
 * d[i]에 영향을 주는 게 d[i-1]일 것으로'만' 생각해서 문제가 더욱 안풀림 -> 점화식 범위를 더 넓게 생각하고 틀에 얽매이지 말고 봐야겠다
 */

#include <iostream>
#include <algorithm>

using namespace std;

int step[300];
int d[300];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nSteps;
    cin >> nSteps;

    for (int i = 0; i < nSteps; i++)
    {
        cin >> step[i];
    }

    d[0] = step[0];
    d[1] = step[0] + step[1];
    d[2] = max(step[0] + step[2], step[1] + step[2]);
    for (int i = 3; i < nSteps; i++)
    {
        d[i] = max(d[i - 2] + step[i], d[i - 3] + step[i - 1] + step[i]);
    }

    cout << d[nSteps - 1] << '\n';

    return 0;
}