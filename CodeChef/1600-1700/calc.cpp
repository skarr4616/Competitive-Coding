#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        double N, B;
        cin >> N >> B;

        long long int m = round(N/(2*B));

        cout << (N*m) - (m*m*B) << endl;
    }

    return 0;
}