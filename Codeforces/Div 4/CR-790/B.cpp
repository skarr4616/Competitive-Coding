#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long int n;
    cin >> n;

    long int arr[n];
    for (long int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long int min = arr[0];
    for (long int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    long long int sum = 0;
    for (long int i = 0; i < n; i++)
    {
        sum += arr[i]-min;
    }

    cout << sum << endl;

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