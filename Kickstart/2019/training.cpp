#include <bits/stdc++.h>

using namespace std;

struct num_count {
    int num = -1;
    int co = 0;
};

int solve()
{
    int n, p;
    cin >> n >> p;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    vector<num_count> freq;
    num_count head;
    head.num = 0;
    head.co = 0;
    freq.push_back(head);

    int num = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i-1])
        {

            if (num == p)
            {
                return 0;
            }

            num_count temp;
            temp.num = arr[i-1];
            temp.co = num;
            freq.push_back(temp);

            num = 0;
        }

        num++;
    }

    num_count temp;
    temp.num = arr[n-1];
    temp.co = num;
    freq.push_back(temp);

    for (int i = 1; i < freq.size(); ++i)
    {
        freq[i].co += freq[i-1].co;
    }

    int min_minutes = 1000000000;

    for (int i = 1; i < freq.size(); ++i)
    {
        if (freq[i].co >= p)
        {
            int rem = p - (freq[i].co - freq[i-1].co);
            int minutes = 0;
            int p = 1;

            while (rem > 0)
            {
                int multiply = min(rem, freq[i-p].co - freq[i-p-1].co);
                minutes += (freq[i].num - freq[i-p].num)*multiply;

                rem -= multiply;
                p++;    
            }

            if (minutes < min_minutes)
            {
                min_minutes = minutes;
            }
        }
    }

    return min_minutes;
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