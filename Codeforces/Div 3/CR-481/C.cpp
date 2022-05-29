#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    long long int rooms[n+1];
    rooms[0] = 0;

    for (int i = 1; i < n+1; i++)
    {
        cin >> rooms[i];
        rooms[i] += rooms[i-1];
    }

    int p = 1;
    long long int letter;

    while (m--)
    {
        cin >> letter;

        while (rooms[p] < letter)
        {
            p++;
        }

        cout << p << " " << letter - rooms[p-1] << endl;
    }

    return 0;
}