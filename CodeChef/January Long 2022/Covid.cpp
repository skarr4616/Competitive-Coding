#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve() 
{
    long int n, d;
    cin >> n >> d;

    if (d <= 10) {
        long int k = pow(2, d);

        cout << min(n, k);
    } else if (d <= 20) {
        long int k = 1024 * pow(3, (d-10));

        cout << min(n, k);
    } else {
        cout << n;
    }

    cout << endl;
}

int main() 
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}