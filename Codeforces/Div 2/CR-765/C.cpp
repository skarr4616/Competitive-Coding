#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l, k;
    cin >> n >> l >> k;

    int dis[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> dis[i];
    }

    dis[n] = l;

    int min[n];
    for (int i = 0; i < n; i++)
    {
        cin >> min[i];
    }

    int time = 0;
    for (int i = 0; i < n; i++)
    {
        time += min[i] * (dis[i + 1] - dis[i]);
    }

    int track = 0;

    long int lower[n];

    for (int i = 0; i < n; i++)
    {
        lower[i] = 1000000000;
    }

    if (k > 0)
    {
        for (int i = 1; i < n; ++i)
        {
            int t1 = min[i - 1] * (dis[i] - dis[i - 1]) + min[i] * (dis[i + 1] - dis[i]);
            int t2 = min[i - 1] * (dis[i + 1] - dis[i - 1]);

            if (t2 < t1)
            {

                if (track != k)
                {
                    time -= t1 - t2;
                    lower[i] = t1 - t2;
                }
                else 
                {
                    
                }
            }
        }
    }

    cout << time << endl;
}