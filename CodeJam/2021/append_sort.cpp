/* Solution is correct (Seen Analysis) but after appending number is getting out of range. Even if unsigned long long int is taken */

#include <bits/stdc++.h>

using namespace std;

int len(unsigned long long int num)
{
    int count  = 0;

    while (num != 0)
    {
        num = num / 10;
        ++count;
    }

    return count;
}

unsigned long long int append_0(unsigned long long int num, int k)
{
    while (k--)
    {
        num = num*10;
    }

    return num;
}

unsigned long long int append_9(unsigned long long int num, int k)
{
    while (k--)
    {
        num = num*10 + 9;
    }

    return num;
}

void solve(int t)
{
    int n;
    cin >> n;

    unsigned long long int arr[n];
    int length[n];

    int add = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        length[i] = len(arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (arr[i] <= arr[i-1])
        {
            if (length[i] == length[i-1])
            {
                add += 1;
                length[i] += 1;   
                arr[i] = arr[i]*10;       
            }
            else
            {
                int k = length[i-1] - length[i];

                if (append_0(arr[i], k) > arr[i-1])
                {
                    add += k;
                    length[i] += k;
                    arr[i] = append_0(arr[i], k);
                }
                else if (append_9(arr[i], k) <= arr[i-1])
                {
                    add += k+1;
                    length[i] += k+1;
                    arr[i] = append_0(arr[i], k+1);
                }
                else
                {
                    add += k;
                    length[i] += k;
                    arr[i] = arr[i-1] + 1;
                }

            }
        }
    }

    cout << "Case #" << t << ": " << add << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        solve(i + 1);
    }

    return 0;
}