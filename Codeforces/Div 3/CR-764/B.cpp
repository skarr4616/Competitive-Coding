#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
    double a, b, c;
    cin >> a >> b >> c;

    int check = 0;

    if (b == (a+c)/2) {
        check = 1;
    } else if ((2*b - c)/a > 0 && (2*b - c)/a == floor((2*b - c)/a)) {
        check = 1;
    } else if ((a+c)/(2*b) > 0 && (a+c)/(2*b) == floor((a+c)/(2*b))) {
        check = 1;
    } else if ((2*b - a)/c > 0 && (2*b - a)/c == floor((2*b - a)/c)) {
        check = 1;
    }

    if (check == 1) {
        cout << "YES";
    } else {
        cout << "NO";
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