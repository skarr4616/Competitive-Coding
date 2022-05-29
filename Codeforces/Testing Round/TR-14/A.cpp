#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    string str;
    cin >> str;

    int start = 0;
    int step = 0;
    bool poss = true;

    while (start != n - 1)
    {
        int dis = d;
        if (start + dis > n - 1)
        {
            dis = n - start - 1;
        }

        while (str[start + dis] != '1')
        {
            dis -= 1;
        }


        if (dis != 0)
        {
            start = start + dis;
            step = step + 1;
        }
        else
        {
            poss = false;
            break;
        }
    }

    if (poss)
    {
        cout << step << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}