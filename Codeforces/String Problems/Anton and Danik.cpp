#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    int A = 0, D = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }

    if (A > D){
        cout << "Anton";
    } else if (D > A){
        cout << "Danik";
    } else{
        cout << "Friendship";
    }

    cout << endl;

    return 0;
}