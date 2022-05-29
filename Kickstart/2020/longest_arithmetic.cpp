#include <bits/stdc++.h>

using namespace std;

int solve()
{
    int n;
    cin >> n;

    long int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    if (n == 2)
    {
        return 2;
    }

    for (int i = n-1; i > 0; --i)
    {
        arr[i] = arr[i] - arr[i-1];
    }

    int max = 0;
    int num = 2;

    for (int i = 2; i < n; ++i)
    {
        if (arr[i] != arr[i-1])
        {
            if (num > max)
            {
                max = num;
            }

            num = 1;
        }

        num++;
    }

    if (num > max)
    {
        max = num;
    }

    return max;
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