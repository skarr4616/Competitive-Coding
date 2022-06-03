// Correct algorithm
/*
    Select the minimum 2n weights and arrange them in nested segments.
*/

#include <bits/stdc++.h>
using namespace std;

struct point {
    int p;
    int w;
    int i;
};

bool compWeight(const point a, const point b)
{
    return a.w < b.w;
}

bool compPos(const point a, const point b)
{
    return a.p < b.p;
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
        arr[i].i = i;
    }

    sort(arr, arr+m, compWeight);
    sort(arr, arr+(2*n), compPos);

    long long int sum = 0;

    for (int i = 0; i < 2*n; ++i)
    {
        sum += arr[i].w;
    } 

    cout << sum << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i].i + 1 << " " << arr[2*n - 1 - i].i + 1 << endl;
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