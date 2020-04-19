/**
 * @file 10828.cpp
 * @brief stack by implementing code
 * @author Sam Kim (samkim2626@gmail.com)
 */

#include <iostream>

using namespace std;

struct Stack
{
    int data[10000];
    int size;

    Stack()
    {
        size = 0;
    }

    void push(int num)
    {
        data[size] = num;
        size += 1;
    }

    int pop()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            size -= 1;
            return data[size];
        }
    }

    bool empty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int top()
    {
        if (empty())
        {
            return -1;
        }
        else
        {
            return data[size - 1];
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Stack s;

    int n;
    cin >> n;

    while (n--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "push")
        {
            int num;
            cin >> num;
            s.push(num);
        }
        else if (cmd == "pop")
        {
            cout << (s.empty() ? -1 : s.top()) << '\n';
            if (!s.empty())
            {
                s.pop();
            }
        }
        else if (cmd == "empty")
        {
            cout << s.empty() << '\n';
        }
        else if (cmd == "top")
        {
            cout << (s.empty() ? -1 : s.top()) << '\n';
        }
        else if (cmd == "size")
        {
            cout << s.size << '\n';
        }
    }

    return 0;
}