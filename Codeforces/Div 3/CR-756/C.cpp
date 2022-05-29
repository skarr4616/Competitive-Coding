#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long int n;
    cin >> n;

    long int ar[n];
    for (long int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    if (ar[0] == n || ar[n-1] == n) {

        for (long int i = n-1; i >= 0; --i) {
            cout << ar[i] << " ";
        }
    } else {
        cout << -1;
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}