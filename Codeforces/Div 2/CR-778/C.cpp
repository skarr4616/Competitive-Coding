#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

struct divide
{
    ll low;
    ll high;
};

divide gunter(ll sum)
{
    divide partition;

    partition.low = sum / 2;
    partition.high = sum - partition.low;

    return partition;
}

void is_possible(divide partition, map<ll, ll> *freq_p, map<ll, ll> *check_freq_p)
{
    if (partition.low == 0)
    {
        return;
    }

    if ((*freq_p).find(partition.low) == (*freq_p).end())
    {
        divide low = gunter(partition.low);

        is_possible(low, freq_p, check_freq_p);
    }
    else
    {
        if ((*check_freq_p).find(partition.low) == (*check_freq_p).end())
        {
            (*check_freq_p)[partition.low] = 1;
        }
        else
        {
            if ((*freq_p)[partition.low] == (*check_freq_p)[partition.low])
            {
                divide low = gunter(partition.low);
                is_possible(low, freq_p, check_freq_p);
            }
            else
            {
                (*check_freq_p)[partition.low] += 1;
            }
        }
    }

    if ((*freq_p).find(partition.high) == (*freq_p).end())
    {
        divide high = gunter(partition.high);

        is_possible(high, freq_p, check_freq_p);
    }
    else
    {
        if ((*check_freq_p).find(partition.high) == (*check_freq_p).end())
        {
            (*check_freq_p)[partition.high] = 1;
        }
        else
        {
            if ((*freq_p)[partition.high] == (*check_freq_p)[partition.high])
            {
                divide high = gunter(partition.high);
                is_possible(high, freq_p, check_freq_p);
            }
            else
            {
                (*check_freq_p)[partition.high] += 1;
            }
        }
    }
}

bool CompareMaps(map<ll, ll> *l, map<ll, ll> *r)
{

    if ((*l).size() != (*r).size())
        return false;

    typename map<ll, ll>::const_iterator i, j;

    for (i = (*l).begin(), j = (*r).begin(); i != (*l).end(); ++i, ++j)
    {
        if (*i != *j)
            return false;
    }

    return true;
}

void solve()
{
    int n;
    cin >> n;

    ll arr[n];
    ll sum = 0;

    map<ll, ll> freq;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        sum += arr[i];

        if (freq.find(arr[i]) == freq.end())
        {
            freq[arr[i]] = 1;
        }
        else
        {
            freq[arr[i]] += 1;
        }
    }

    divide partition = gunter(sum);
    map<ll, ll> check_freq;

    is_possible(partition, &freq, &check_freq);

    if (CompareMaps(&freq, &check_freq) && n > 1)
    {
        cout << "YES";
    }
    else if (n == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    cout << endl;
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
