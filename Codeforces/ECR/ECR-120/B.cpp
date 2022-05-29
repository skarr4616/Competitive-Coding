#include <bits/stdc++.h>

using namespace std;

struct pos{
    int idx;
    int num;
};

bool compare_rating(pos a, pos b)
{
    return a.num < b.num;
}

void solve()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    string stat;
    cin >> stat;

    vector<pos> zero;
    vector<pos> one;

    pos temp;

    for (int i = 0; i < n; i++)
    {
        temp.idx = i;
        temp.num = arr[i];

        if (stat[i] == '0')
        {
            zero.push_back(temp);
        }
        else
        {
            one.push_back(temp);
        }
    }

    sort(zero.begin(), zero.end(), compare_rating);
    sort(one.begin(), one.end(), compare_rating);

    int idx = 1;

    for (int i = 0; i < zero.size(); i++)
    {
        arr[zero[i].idx] = idx;
        idx++;
    }

    for (int i = 0; i < one.size(); i++)
    {
        arr[one[i].idx] = idx;
        idx++;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        solve();
    }
}