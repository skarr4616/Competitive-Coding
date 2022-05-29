#include <bits/stdc++.h>

using namespace std;

long long int solve()
{
    int n, p;
    cin >> n >> p;

    long long int arr[p];
    
    int prev = 0;
    long long int num_steps = 0;

    while (n--)
    {
        for (int i = 0; i < p; i++)
        {
            cin >> arr[i]; 
        }

        sort(arr, arr+p);

        if (prev <= (arr[0] + arr[p-1])/2)
        {
            num_steps += abs(prev - arr[0]);
            num_steps += abs(arr[p-1] - arr[0]);

            prev = arr[p-1];
        }
        else
        {
            num_steps += abs(arr[p-1] - prev);
            num_steps += abs(arr[p-1] - arr[0]);

            prev = arr[0];
        }
    }

    return num_steps;
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