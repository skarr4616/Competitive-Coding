#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    unordered_set<int> digits;

    int temp;
    for (int i = 0; i < k; i++)
    {
        cin >> temp;
        digits.insert(temp);
    }

    int ans = n;
    int copy = n;
    if (digits.find(9) == digits.end())
    {
        int l = 1;

        while (copy != 0)
        {
            if (digits.find(copy%10) != digits.end())
            {
                
            }
        }
    }

    return 0;
}