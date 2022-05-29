#include <bits/stdc++.h>

using namespace std;

struct node {
    int n1;
    int n2;
};

void solve()
{
    int n;
    cin >> n;

    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    int B[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }

    vector<node> ans;
    int count = 0;
    bool sorted = false;

    while (count <= 10000 && !sorted)
    {
        sorted = true;
        
        for (int i = 0; i < n - 1; ++i)
        {
            if (A[i] > A[i + 1])
            {
                int temp = A[i];
                A[i] = A[i + 1];
                A[i + 1] = temp;

                temp = B[i];
                B[i] = B[i + 1];
                B[i + 1] = temp;

                node copy;
                copy.n1 = i+1;
                copy.n2 = i + 2;
                ans.push_back(copy);

                count++;
                sorted = false;
            }
        }
    }

    if (count > 10000)
    {
        cout << -1 << endl;
    }
    else
    {
        bool poss = true;

        sorted = false;
        while (count <= 10000 && !sorted)
        {
            sorted = true;
            
            for (int i = 0; i < n-1; ++i)
            {
                if (B[i] > B[i + 1])
                {
                    if (A[i] == A[i + 1])
                    {
                        int temp = A[i];
                        A[i] = A[i + 1];
                        A[i + 1] = temp;

                        temp = B[i];
                        B[i] = B[i + 1];
                        B[i + 1] = temp;

                        node copy;
                        copy.n1 = i+1;
                        copy.n2 = i + 2;
                        ans.push_back(copy);

                        count++;
                        sorted = false;
                    }
                    else
                    {
                        poss = false;
                        break;
                    }
                }
            }

            if (!poss)
            {
                break;
            }
        }

        if (count > 10000)
        {
            poss = false;
        }

        if (!poss)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;

            for (int i = 0; i < ans.size(); ++i)
            {
                cout << ans[i].n1 << " " << ans[i].n2 << endl;
            }
        }

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