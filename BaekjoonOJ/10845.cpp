/**
 * @file 10845.cpp
 * @brief 큐 - 구현
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>
#include <string>

using namespace std;

struct Queue
{
    int data[10000];
    int begin, end;
    Queue()
    {
        begin = 0;
        end = 0;
    }

    void push(int num)
    {
        data[end] = num;
        end += 1;
    }
    int pop()
    {
        if (empty())
        {
            return -1;
        }
        begin += 1;
        return data[begin - 1];
    }
    int size()
    {
        return end - begin;
    }
    bool empty()
    {
        if (begin == end)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int front()
    {
        return data[begin];
    }
    int back()
    {
        return data[end - 1];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Queue q;

    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        if (str == "push")
        {
            int num;
            cin >> num;
            q.push(num);
        }
        else if (str == "pop")
        {
            cout << q.pop() << '\n';
        }
        else if (str == "size")
        {
            cout << q.size() << '\n';
        }
        else if (str == "empty")
        {
            if (q.empty())
            {
                cout << 1 << '\n';
            }
            else
            {
                cout << 0 << '\n';
            }
        }
        else if (str == "front")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.front() << '\n';
            }
        }
        else if (str == "back")
        {
            if (q.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << q.back() << '\n';
            }
        }
    }

    return 0;
}