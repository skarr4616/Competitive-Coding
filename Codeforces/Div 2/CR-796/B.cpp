#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

vector<int> factorize(int n)
{
    int num = n;
    int power = 0;

    while (num%2 == 0)
    {
        num = num/2;
        ++power;
    }

    return {power, n};
}

bool comp(vector<int> a, vector<int> b)
{
    return a[0] < b[0];
}

int numDiv(int n)
{
    int power = 0;

    while (n%2 == 0)
    {
        n = n/2;
        ++power;
    }

    return power;
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    vector<int> odd;
    vector<int> even;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i]%2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }

    int res = 0;

    if (odd.size() != 0)
    {
        res += even.size();
    }
    else
    {
        vector<vector<int>> factor;

        for (int i = 0; i < even.size(); ++i)
        {
            factor.push_back(factorize(even[i]));
        }

        sort(factor.begin(), factor.end(), comp);

        int num_odd = 0;
        int num_even = n;

        int l = 0;
        int r = n-1;

        while (num_odd < num_even)
        {
            res += 1;

            int add = factor[l][1] + factor[r][1];
            res += numDiv(add);

            ++l;
            --r;

            num_even -= 2;
            num_odd += 1;
        }

        res += num_even;

    }

    cout << res << endl;
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