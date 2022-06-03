#include <bits/stdc++.h>

using namespace std;

struct shoe {
    int size;
    int pos;
};

bool comPair(shoe a, shoe b)
{
    return a.size < b.size;
}

int next(vector<shoe>& arr, int target, int end)
{
    int start = 0;
 
    int ans = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
 
        // Move to right side if target is
        // greater.
        if (arr[mid].size < target)
            start = mid + 1;
 
        // Move left side.
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
 
    return ans;
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    vector<shoe> look;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];

        shoe temp;
        temp.size = arr[i];
        temp.pos = i;

        look.push_back(temp);
    }

    sort(look.begin(), look.end(), comPair);

    bool poss = true;
    vector<int> res;

    for (int i = 0; i < n; ++i)
    {
        int p = next(look, arr[i], look.size());

        if (look[p].pos == i)
        {
            p += 1;
        }

        if (p == look.size() || p == -1)
        {
            poss = false;
            break;
        }
        else
        {
            res.push_back(look[p].pos + 1);
            look.erase(look.begin() + p);
        }
    }

    if (poss)
    {
        for (int i = 0; i < res.size(); ++i)
        {
            cout << res[i] << " ";
        }

        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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