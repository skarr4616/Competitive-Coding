#include <bits/stdc++.h>

using namespace std;

struct freq {
    int l = -1;
    int r = -1;
    int num = 0;
};

bool compareQuery(freq a, freq b) 
{
    return a.num < b.num;
}

int solve()
{
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }

    freq query[q];
    for (int i = 0; i < q; ++i)
    {
        cin >> query[i].l;
        cin >> query[i].r;

        query[i].num = query[i].r - query[i].l + 1;
    }

    sort(query, query + q, compareQuery);

    int min_assigned = query[0].num;

    for (int i = 0; i < q; ++i)
    {
        int seat_assigned = 0;

        for (int j = query[i].l - 1; j < query[i].r; ++j)
        {
            if (arr[j] == 0)
            {
                arr[j] = 1;
                seat_assigned++;
            }
        }

        if (seat_assigned < min_assigned)
        {
            min_assigned = seat_assigned;
        }

        if (min_assigned == 0)
        {
            break;
        }
    }

    return min_assigned;
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