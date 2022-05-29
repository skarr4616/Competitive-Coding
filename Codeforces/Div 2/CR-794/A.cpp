#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<double> arr;
    double temp;
    for (int i = 0; i < n; ++i)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        sum += arr[i];
    }

    double k = (sum/n)*(n-1);

    if (find(arr.begin(), arr.end(), sum - k) != arr.end())
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