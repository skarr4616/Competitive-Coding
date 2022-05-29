#include <iostream>

using namespace std;

void solve()
{
    int n, l;
    cin >> n >> l;

    long int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int final[l] = {0};
    long int div = 1;

    for (int i = 0; i < l; i++) {
        
        int one  = 0;
        int zero = 0;

        div = 2*div;

        for (int j = 0; j < n; j++) {
            
            one += ar[j]%2;
            zero += 1 - ar[j]%2;

            ar[j] = ar[j]/2;
        }

        if (one > zero) {
            final[i] = 1;
        } else {
            final[i] = 0;
        }
    }

    long int ans = 0;
    int mul = 1;

    for (int i = 0; i < l; i++) {
        ans += mul*final[i];
        mul = 2*mul;
    }

    cout << ans << endl;
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