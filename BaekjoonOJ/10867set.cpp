/**
 * @file 10867(set).cpp
 * @brief 중복 빼고 정렬하기
 * @author Sam Kim (samkim2626@gmail.com)
 * 
 * set으로 풀이
 * key값 중복 허용X, 삽입되면 원소는 자동정렬 <- 이 특징으로 set로 품
 * 연관 컨테이너 - 노드 기반 컨테이너 (자료 추가, 삭제에 유리 / 순차적 접근만 가능, 랜덤접근 불가)
 * 중위순회 통하여 순서대로 출력이 가능
 * 
 * ps. vector, algorithm 으로 풀어보기
 */

#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;
    while (n--)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    // set<int>::iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << ' ';
    // }

    for (auto &it : s)
    {
        cout << it << ' ';
    }

    cout << '\n';

    return 0;
}