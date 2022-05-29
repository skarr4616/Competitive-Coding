#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int len = 1;
    int max_len = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i-1])
        {
            if (len > max_len)
            {
                max_len = len;
            }

            len = 1;
        }
        else
        {
            len++;
        }
    }

    if (len > max_len)
    {
        max_len = len;
    }

    cout << max_len << endl;
}