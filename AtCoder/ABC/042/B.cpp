#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    string str = "";
    for (int i = 0; i < n; i++)
    {
        str += arr[i];
    }

    cout << str << endl;
    return 0;
}

