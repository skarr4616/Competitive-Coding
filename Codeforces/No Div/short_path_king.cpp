#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ini;
    cin >> ini;

    string end;
    cin >> end;

    int step = 0;

    if (ini[0] == end[0])
    {
        step = abs(ini[1] - end[1]);
        cout << step << endl;

        for (int i = 0; i < step; i++)
        {
            if (ini[1] < end[1])
            {
                cout << "U" << endl;
            }
            else
            {
                cout << "D" << endl;
            }
        }
    }
    else if (ini[1] == end[1])
    {
        step = abs(ini[0] - end[0]);
        cout << step << endl;

        for (int i = 0; i < step; i++)
        {
            if (ini[0] < end[0])
            {
                cout << "R" << endl;
            }
            else
            {
                cout << "L" << endl;
            }
        } 
    }
    else
    {
        int x_gap = abs(ini[0] - end[0]);
        int y_gap = abs(ini[1] - end[1]);

        step = max(x_gap, y_gap);
        cout << step << endl;

        if (ini[0] < end[0] && ini[1] < end[1])
        {
            for (int i = 0; i < min(x_gap, y_gap); i++)
            {
                cout << "RU" << endl;
            }

            for (int i = 0; i < max(x_gap, y_gap) - min(x_gap, y_gap); i++)
            {
                if (x_gap == max(x_gap, y_gap))
                {
                    cout << "R" << endl;
                }
                else
                {
                    cout << "U" << endl;
                }
            }
        }
        else if (ini[0] < end[0] && ini[1] > end[1])
        {
            for (int i = 0; i < min(x_gap, y_gap); i++)
            {
                cout << "RD" << endl;
            }

            for (int i = 0; i < max(x_gap, y_gap) - min(x_gap, y_gap); i++)
            {
                if (x_gap == max(x_gap, y_gap))
                {
                    cout << "R" << endl;
                }
                else
                {
                    cout << "D" << endl;
                }
            }
        }
        else if (ini[0] > end[0] && ini[1] < end[1])
        {
            for (int i = 0; i < min(x_gap, y_gap); i++)
            {
                cout << "LU" << endl;
            }

            for (int i = 0; i < max(x_gap, y_gap) - min(x_gap, y_gap); i++)
            {
                if (x_gap == max(x_gap, y_gap))
                {
                    cout << "L" << endl;
                }
                else
                {
                    cout << "U" << endl;
                }
            }
        }
        else if (ini[0] > end[0] && ini[1] > end[1])
        {
            for (int i = 0; i < min(x_gap, y_gap); i++)
            {
                cout << "LD" << endl;
            }

            for (int i = 0; i < max(x_gap, y_gap) - min(x_gap, y_gap); i++)
            {
                if (x_gap == max(x_gap, y_gap))
                {
                    cout << "L" << endl;
                }
                else
                {
                    cout << "D" << endl;
                }
            }
        }
    }
}