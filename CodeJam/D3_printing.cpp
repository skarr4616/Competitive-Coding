#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int c1, m1, y1, k1;
    int c2, m2, y2, k2;
    int c3, m3, y3, k3;

    cin >> c1 >> m1 >> y1 >> k1;
    cin >> c2 >> m2 >> y2 >> k2;
    cin >> c3 >> m3 >> y3 >> k3;

    int c_min = min(c1, c2);
    c_min = min(c_min, c3);

    int m_min = min(m1, m2);
    m_min = min(m_min, m3);

    int y_min = min(y1, y2);
    y_min = min(y_min, y3);

    int k_min = min(k1, k2);
    k_min = min(k_min, k3);

    cout << "Case #" << t << ": ";

    if (c_min + m_min + y_min + k_min < 1000000)
    {
        cout << "IMPOSSIBLE";
    }
    else
    {
        cout << c_min << " ";

        if (c_min + m_min < 1000000)
        {
            cout << m_min << " ";
        }
        else
        {
            m_min = 1000000 - c_min;
            cout << m_min << " ";
        }

        if (c_min + m_min + y_min < 1000000)
        {
            cout << y_min << " ";
        }
        else
        {
            y_min = 1000000 - c_min - m_min;
            cout << y_min << " ";
        }

        k_min = 1000000 - c_min - m_min - y_min;
        cout << k_min << " ";
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve(i + 1);
    }

    return 0;
}