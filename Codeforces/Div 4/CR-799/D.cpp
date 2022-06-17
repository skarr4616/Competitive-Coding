#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for (int i = a; i < b; ++i)
typedef unsigned long long int ull;

void solve()
{
    
    string str;
    cin >> str;
    
    int hr = (str[0] - '0')*10 + (str[1]-'0');
    int min = (str[3] - '0')*10 + (str[4]-'0');

    int x = 0;
    cin >> x;

    int time = hr*60 + min;

    vector<int> minutes(1440, 0);
    minutes[time] = 1;

    while (true)
    {
        time = time+x;

        if (time >= 1440)
        {
            time -= 1440;
        }

        if (minutes[time] == 1)
        {
            break;
        }

        minutes[time] = 1;
    }

    int ans = 0;
    for (int i = 0; i < 1440; ++i)
    {
        if (minutes[i] == 0)
        {
            continue;
        }

        int k = i;

        int k_hr = k/60;
        int k_min = k%60;

        int a1 = k_hr%10;
        k_hr /= 10;

        int a2 = k_hr%10;

        int b2 = k_min%10;
        k_min /= 10;

        int b1 = k_min%10;

        if (a1 == b1 && a2 == b2)
        {
            ans++;
        }
    }

    cout << ans << endl;

    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}