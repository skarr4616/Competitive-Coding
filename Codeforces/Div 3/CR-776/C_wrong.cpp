// Wrong algorithm
/*
    Idea was to select two minimum weights from the n-1 to m-n and create first segment.
    Then to select minimum from n-2 to l1, and r1 to m-n+1.
    Then to select minimum from n-3 to l2, and r2 to m-n+2.
    and go on...
*/

#include <bits/stdc++.h>
using namespace std;

struct point {
    int p;
    int w;
};

bool comp(const point a, const point b)
{
    return a.p < b.p;
}

int findMin(point* arr, int l, int r)
{
    int p = l;
    int min_w = INT_MAX;

    for (int i = l; i <= r; ++i)
    {
        if (arr[i].p < min_w)
        {
            min_w = arr[i].p;
            p = i;
        }
    }

    return p;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    point arr[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i].p;
        cin >> arr[i].w;
    }

    sort(arr, arr+m, comp);

    vector<vector<int>> res;
    long long int sum = 0;

    int min_w = INT_MAX;
    int min_p1 = n-1;
    for (int i = n-1; i <= m-n; ++i)
    {
        if (arr[i].w < min_w)
        {
            min_w = arr[i].w;
            min_p1 = i;
        }
    }

    sum += arr[min_p1].w;

    min_w = INT_MAX;
    int min_p2 = n-1;
    for (int i = n-1; i <= m-n; ++i)
    {
        if (i != min_p1 && arr[i].p < min_w)
        {
            min_w = arr[i].w;
            min_p2 = i;
        }
    }

    sum += arr[min_p2].w;

    res.push_back({min_p1, min_p2});
    sort(res[0].begin(), res[0].end());

    int prev_l = res[0][0]-1;
    int prev_r = res[0][1]+1;
    int curr_l;
    int curr_r;

    for (int i = 1; i < n; ++i)
    {
        curr_l = n-1-i;
        curr_r = m-n+i;

        int p1 = findMin(arr, curr_l, prev_l);
        int p2 = findMin(arr, prev_r, curr_r);

        sum += arr[p1].w;
        sum += arr[p1].w;

        res.push_back({p1, p2});
        prev_l = p1-1;
        prev_r = p2+1;
    }

    cout << sum << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << res[i][0] << " " << res[i][1] << endl;
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