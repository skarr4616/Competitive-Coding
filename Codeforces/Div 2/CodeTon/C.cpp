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

    sort(arr, arr+n);

    int small = arr[0];

    if (small >= 2)
    {
        cout << "YES";
    }
    else if (small == 1)
    {
        int check = 1;

        for (int i = 0; i < n-1; ++i)
        {
            if (arr[i+1] - arr[i] == 1)
            {
                check = 0;
                break;
            }    
        }

        if (check == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        int check = 1;

        for (int i = 1; i < n; ++i)
        {
            if (arr[i] == 1)
            {
                check = 0;
                break;
            }
            else if (arr[i] > 1)
            {
                break;
            }
        }

        if (check == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    
    cout << endl;
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