#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    unordered_map<int, int> freq;
    
    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        if (freq.find(arr[i]) == freq.end())
        {
            freq.insert({arr[i], 1});
        }
        else
        {
            freq[arr[i]]++;
        }
    }

    bool dup[INT_MAX] = {false};

    if (n%2 == 0)
    {
        int l_max = -1;
        int r_max = -1;

        for (int i = 0; i < )
        
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}