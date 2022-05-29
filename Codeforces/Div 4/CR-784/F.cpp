#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool poss = false;
    int num_can_saved = 0;
    int num_can = 2;

    int left_sum = arr[0];
    int right_sum = arr[n-1];

    int i = 1;
    int j = n-2;

    if (n > 1)
    {
        while(i < j)
        {
            if (left_sum > right_sum)
            {
                right_sum += arr[j];
                num_can++;
                j--;
            }
            else if (left_sum < right_sum)
            {
                left_sum += arr[i];
                num_can++;
                i++;
            }
            else
            {
                num_can_saved = num_can;
                poss = true;

                right_sum += arr[j];
                num_can++;
                j--;

                left_sum += arr[i];
                num_can++;
                i++;
            }
        }
    }

    if (n > 1 && left_sum == right_sum)
    {
        num_can_saved = 2;
    }

    cout << num_can_saved << endl;

    
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}