#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0;
    int r = n-1;

    int sold = 0;
    int max = 0;
    int paid = 0;

    while(sold != n)
    {
        int temp_l = l;
        int temp_r = r;

        while (arr[temp_l] == arr[temp_r] && temp_l < temp_r)
        {
            temp_l++;
            temp_r--;
        }

        if (arr[temp_l] < arr[temp_r])
        {
            if (arr[l] >= max)
            {
                paid++;
                max = arr[l];
            }
            
            l++;
        }
        else
        {
            if (arr[r] >= max)
            {
                paid++;
                max = arr[r];
            }

            r--;
        }

        sold++;
    }

    return paid;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i+1 << ": " << solve() << endl;
    }

    return 0;
}