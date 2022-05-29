#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int ar[n];

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    int track[150000][2] = {0};

    for (int i = 0; i < n; ++i) {
        
        if (track[ar[i] - 1][0] != 0) {
            track[ar[i] - 1][1] = i+1;
        } else {
            track[ar[i] - 1][0] = i+1;
            track[ar[i] - 1][1] = i+1;
        }
    }

    int max = -1;
    int a, b;

    for (int i = 0; i < 150000; ++i) {
        if (track[i][1] - track[i][0] > max) {
            max = track[i][1] - track[i][0];
            a = track[i][0];
            b = track[i][1];
        }
    }

    if (max == 0) {
        cout << -1;
    } else {
        int left = a - 1;
        int mid = b - a - 1;
        int right = n - b;

        int length;

        length += left <= mid ? left : mid;
        length += right <= mid ? right : mid;
        length += 1;

        if (a + (right <= mid ? right : mid) == b - (left <= mid ? left : mid)) {
            length -= 1;
        }

        cout << length;
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        solve();
    }

    return 0;
}