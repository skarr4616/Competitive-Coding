#include <iostream>

using namespace std;

void solve() {

    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    
    if ((l1 + l2 + l3)%2 != 0) {                                     // Check if sum is divisible by 2

        cout << "NO";
    } else if (l1 == l2 || l2 == l3 || l1 == l3) {                   // If divisible check if any two are equal. If two are equal, the third can be broken into 2 pices

        cout << "YES";
    } else {                                                         // If all are different, the largest should be sum of the other two

        int max = l1 > l2 ? l1 : l2;
        max = max > l3 ? max : l3;

        if (max == (l1 + l2 + l3)/2) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }

    cout << endl;

}

int main () {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}