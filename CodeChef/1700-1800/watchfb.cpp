#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int op, numA, numB;
    
    int goalA = 0;
    int goalB = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> op >> numA >> numB;

        if (numA == numB || op == 1)
        {
            cout << "YES";
            goalA = numA;
            goalB = numB;
        }
        else
        {
            if (goalA == goalB)
            {
                cout << "NO";
            }
            else if (numA >= max(goalA, goalB) && numB >= max(goalA, goalB))
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";

                if (goalA > goalB)
                {
                    goalA = max(numA, numB);
                    goalB = min(numA, numB);
                }
                else
                {
                    goalA = min(numA, numB);
                    goalB = max(numA, numB);
                }
            }
        }

        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}