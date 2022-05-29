#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    long int a, b;
    long int c;

    while (t--)
    {
        cin >> a >> b;

        c = a^b;
        
        cout << c << endl;
    }

    return 0;
}