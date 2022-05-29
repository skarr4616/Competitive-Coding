#include <iostream>
#include <string>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    if (s.length() <= 2) {
        cout << "No";
    } else {
        int check = 0;

        for (int i = 0; i < s.length() - 1; ++i) {
            if (s[i] == '1') {
                check = 1;
                break;
            }
        }

        if (check == 0) {
            cout << "No";
        } else {
            cout << "Yes";
        }
    }

    cout << endl;
}

int main() 
{
    int t;
    cin >> t;

    for(int i=0; i<t; i++) {
        solve();
    }

    return 0;
}

// 2 --> 10
// 3 --> 11