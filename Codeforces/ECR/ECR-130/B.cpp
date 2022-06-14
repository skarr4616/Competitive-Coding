#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int ull;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<ull> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), greater<int>());
    for (int i = 1; i < n; ++i)
    {
        arr[i] += arr[i-1];
    }

    int x, y;
    while (q--)
    {
        cin >> x >> y;
        
        if (x == y)
        {
            cout << arr[x-1] << endl;
        }
        else
        {
            cout << arr[x-1] - arr[x-y-1] << endl;
        }
    }

    return 0;
}