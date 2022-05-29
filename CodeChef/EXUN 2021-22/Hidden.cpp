#include <iostream>

using namespace std;

void solve()
{
    long int N, A;
    cin >> N >> A;

    if (A%2 == 1) {
        if (N%2 == 1) {
            cout << "Odd";
        } else {
            cout << "Even";
        }
    } else {
        if (N == 1) {
            cout << "Even";
        } else {
            cout << "Impossible";
        }
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