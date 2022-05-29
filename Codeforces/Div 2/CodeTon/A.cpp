#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i_ind = 1;
    int i_num = arr[0];
    int j_ind = 1;
    int j_num = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > i_num)
        {
            i_num = arr[i];
            i_ind = i+1;
        }

        if (arr[i] < j_num)
        {
            j_num = arr[i];
            j_ind = i+1;
        }
    }

    cout << i_ind << " " << j_ind << endl;

    return;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}