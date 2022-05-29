#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int n = str.size();

    int num_a = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a')
        {
            num_a++;
        }
    }

    while (num_a < n/2)
    {
        num_a--;
    }

    cout << 2*num_a + 1 << endl;
}