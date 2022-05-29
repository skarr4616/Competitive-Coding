#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long int max = 0;
    long int min = 1000000000;

    long int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];

        if (ar[i] > max) {
            max = ar[i];
        }

        if (ar[i] < min) {
            min = ar[i];
        }
    }

    cout << max - min << endl;

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