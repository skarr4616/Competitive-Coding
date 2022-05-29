#include <bits/stdc++.h>

using namespace std;

void solve(int t)
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    int sum = 0;

    for (int  i = 0; i < n; i++)
    {
        if (sum + 1 <= arr[i])
        {
            sum = sum + 1;
        }
    }

    cout << "Case #" << t << ": " << sum << endl;
    return;


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