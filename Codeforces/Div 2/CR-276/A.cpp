#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int a, m;
    cin >> a >> m;

    long int r = a%m;
    int check = -1;

    do 
    {
        a = a + (a%m);

        if (a%m == 0)
        {
            check = 1;
        }
        else if (a%m == r)
        {
            check = 0;
        }

    } while (a%m != 0 && a%m != r);

    if (check == 0)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }

    cout << endl;
}