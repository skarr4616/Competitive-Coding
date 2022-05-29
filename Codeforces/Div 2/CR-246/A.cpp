#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int temp;
    int participants = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        temp += k;

        if (temp <= 5)
        {
            participants++;
        }
    }

    cout << participants/3 << endl;
    return 0;
}