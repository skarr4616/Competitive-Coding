#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    map<long int, int> freq;
    for (int i = 0; i < n; i++)
    {
        if (freq.find(arr[i]) == freq.end())
        {
            freq[arr[i]] = 1;
        }
        else
        {
            freq[arr[i]]++;
        }
    }

    long int l = 0, r = 0;
    bool found = false;

    int dis = freq.size();

    map<long int, int>::iterator itr;
    int idx;
    for (idx = 0, itr = freq.begin(); itr != freq.end(); idx++, itr++)
    {
        if (itr->second >= k)
        {
            int temp_l = itr->first;
            int temp_r = itr->first;
            found = true;

            map<long int, int>::iterator ins = itr;
            int idx_2 = idx;
            for (idx_2 = ++idx_2, ins = ++ins; ins != freq.end(); idx_2++, ins++)
            {
                if (ins->second < k)
                {
                    break;
                }
                else
                {
                    if (ins->first - itr->first != idx_2-idx)
                    {
                        break;
                    }
                    else
                    {
                        temp_r = ins->first;
                    }
                }
            }

            if (temp_r - temp_l >= r-l)
            {
                l = temp_l;
                r = temp_r;
            }

            itr = --ins;
            idx = --idx_2;
        }
    }

    
    if (found)
    {
        cout << l << " " << r << endl;
    }
    else
    {
        cout << -1 << endl;
    }



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