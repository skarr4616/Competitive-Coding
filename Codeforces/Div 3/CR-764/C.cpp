#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    long int ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++) {
        
        if (ar[i] > n) {
            while (ar[i] > n) {
                ar[i] = ar[i]/2;
            }
        }
    }

    int track[n] = {0};
    for (int i = 0; i < n; i++) {
        track[ar[i] - 1] += 1;
    }

    int check = 2;

    for (int i = 0; i < n; i++) {
        if (track[ar[i] - 1] > 1) {

            track[ar[i] - 1] -= 1;

            while (track[ar[i] - 1] != 0) {
                ar[i] = ar[i]/2;

                if (ar[i] == 0) {
                    check = 0;
                    break;
                }
            }

            if (check != 0) {
                track[ar[i] - 1] += 1;
            }
        }

        if (check == 0) {
            break;
        }
    }

    if (check == 0) {
        cout << "NO";
    } else {
        int num = 0;

        for (int i = 0; i < n; i++) {
            if (track[i] == 1) {
                num += 1;
            }
        }

        if (num == n) {
            cout << "YES";
        } else {
            cout << "NO";
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