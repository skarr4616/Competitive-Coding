#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    long int n;
    long int a;
    long int c;
    

    while (t--)
    {
        c = 0;
        cin >> n;

        while (n--)
        {
            cin >> a;
            c = c|a;
        }
        
        cout << c << endl;
    }

    return 0;
}