#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long long int arr[n];
    map <long long int, int> freq;
    int max_freq = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (freq.find(arr[i]) == freq.end())
        {
            freq[arr[i]] = 1;
        }
        else
        {
            freq[arr[i]] += 1;
        }

        if (freq[arr[i]] > max_freq)
        {
            max_freq = freq[arr[i]];
        }
    }

    int num_same = max_freq;
    int num_operations = 0;

    while(n - num_same > num_same)
    {
        num_operations += 1 + num_same;
        num_same *= 2;
    }

    if (n - num_same != 0)
    {
        num_operations += 1 + (n - num_same);
    }

    cout << num_operations << "\n";
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}