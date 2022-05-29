#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int l, r;
    cin >> l >> r;

    long long int n = r-l+1;

    long long int arr[r-l+1];
    for (long long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int a = arr[0];
    for (long long int i = 1; i < n; ++i)
    {
        a = a & arr[i];
    }
    

}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve()
    }

    return 0;
}