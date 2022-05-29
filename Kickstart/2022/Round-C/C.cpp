#include <bits/stdc++.h>

using namespace std;

struct ant {
    int num;
    int pos;
    int dir;
};

bool compare(ant a, ant b) 
{
    return a.pos < b.pos;
}

void solve(int t)
{
    int n, l;
    cin >> n >> l;

    ant array[n];
    for (int i = 0; i < n; i++)
    {
        array[i].num = i+1;
        cin >> array[i].pos;
        cin >> array[i].dir;
    }

    sort(array, array+n, compare);

    int left = 0;
    int right = n-1;
    vector<int> ans;

    while (left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            if (array[i].dir == 0)
            {
                array[i].pos -= 1;
            }
            else
            {
                if (i+1 <= right && array[i+1].dir == 1)
                {
                    array[i].pos += 1;
                }
                else if (i+1 <= right && array[i+1].dir == 0)
                {
                    if (array[i+1].pos - array[i].pos == 0)
                    {
                        array[i].pos -= 1;
                        array[i].dir = 0;

                        array[i+1].pos += 1;
                        array[i+1].dir = 1;

                        i++;
                    }
                    else if (array[i+1].pos - array[i].pos == 1)
                    {
                        array[i].dir = 0;
                        array[i+1].dir = 1;

                        i++;
                    }
                    else
                    {
                       array[i].pos += 1; 
                    }
                }
                else
                {
                    array[i].pos += 1;
                }
            }
        }

        if (array[left].pos <= 0 && array[right].pos >= l)
        {
            if (array[left].num < array[right].num)
            {
                ans.push_back(array[left].num);
                ans.push_back(array[right].num);
            }
            else
            {
                ans.push_back(array[right].num);
                ans.push_back(array[left].num);
            }

            left += 1;
            right -= 1;
        }
        else if (array[left].pos <= 0)
        {
            ans.push_back(array[left].num);
            left += 1;
        }
        else if (array[right].pos >= l)
        {
            ans.push_back(array[right].num);
            right -= 1;
        }
    }

    cout << "Case #" << t << ": ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve(i+1);
    }

    return 0;
}