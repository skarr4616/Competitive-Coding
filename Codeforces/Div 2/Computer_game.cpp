#include <bits/stdc++.h>

using namespace std;

int dfs(int n, int r, int c, bool* visited, int* arr)
{
    if (*visited[r][c] == true)
    {
        if (r == 2 && c == n)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    if (r == 0)
    {
        if (*arr[r][c+1] == 0)
        {
            
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    int arr[2][n];
    bool visited[2][n];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[i][j];
            visited[i][j] = false;
        }
    }

    int poss = dfs(n, 0, 0, &visited, &arr);

}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }

    return 0;
}