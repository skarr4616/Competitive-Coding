#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> res(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        res[i] = i+1;
    }

    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }

    for (int i = 0; i < n-1; ++i)
    {
        if (arr[i] == res[i])
        {
            int temp = res[i+1];
            res[i+1] = res[i];
            res[i] = temp; 
        }
    }

    for (int i = n-1; i >= 0; --i)
    {
        if (arr[i] == res[i])
        {
            int temp = res[i-1];
            res[i-1] = res[i];
            res[i] = temp;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << res[i] << " ";
    }

    cout << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}