#include <iostream>

using namespace std;

void solve()
{
    float t1, t2, r1, r2;
    cin >> t1 >> t2 >> r1 >> r2;

    float a = (t1*t1)/(r1*r1*r1);
    float b = (t2*t2)/(r2*r2*r2);

    if (a == b) {
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

    for(int i = 0; i < t; i++) {
        solve();
    }
}