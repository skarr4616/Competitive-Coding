#include <iostream>

using namespace std;

void solve()
{
    long int A1, A2, B1, B2, C1, C2;
    cin >> A1 >> A2;

    long int max = A1 + A2;

    cin >> B1 >> B2;

    if (B1+B2 > max) {
        max = B1 + B2;
    }

    cin >> C1 >> C2;

    if (C1+C2 > max) {
        max = C1 + C2;
    }

    cout << max << endl;

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