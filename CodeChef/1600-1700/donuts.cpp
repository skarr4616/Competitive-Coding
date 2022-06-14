#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    int is1 = 0;
    int arr[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];

        if (arr[i] == 1)
        {
            is1++;
        }
    }

    int isNot1 = m - is1;
    int cut = 0;

    while (is1 != 0)
    {
        --is1;
        --isNot1;
        cut++;
    }

    while (isNot1 > 2)
    {
        isNot1 -= 2;
        cut += 2;
    }

    if (isNot1 == 2)
    {
        cut += 1;
    }

    cout << cut << endl;
    return;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}