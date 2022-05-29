#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string ar[t];

    for (int i = 0; i < t; i++)
    {
        cin >> ar[i];
    }

    int l;

    for (int i = 0; i < t; i++)
    {
        l = ar[i].length();

        if (ar[i][l-1] == 'A' || ar[i][l-1] == 'E' || ar[i][l-1] == 'I' || ar[i][l-1] == 'O' || ar[i][l-1] == 'U')
        {
            cout << "Case #" << i+1 << ": " << ar[i] << " is ruled by Alice." << endl; 
        }
        else if (ar[i][l-1] == 'a' || ar[i][l-1] == 'e' || ar[i][l-1] == 'i' || ar[i][l-1] == 'o' || ar[i][l-1] == 'u')
        {
            cout << "Case #" << i+1 << ": " << ar[i] << " is ruled by Alice." << endl; 
        }
        else if (ar[i][l-1] == 'y')
        {
            cout << "Case #" << i+1 << ": " << ar[i] << " is ruled by nobody." << endl; 
        }
        else
        {
            cout << "Case #" << i+1 << ": " << ar[i] << " is ruled by Bob." << endl; 
        }
    }

    return 0;
}