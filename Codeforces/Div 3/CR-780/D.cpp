#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int arr[n];

    vector<int> neg_two;
    vector<int> neg_one;
    vector<int> zero;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == -2)
        {
            neg_two.push_back(i);
        }
        else if (arr[i] == -1)
        {
            neg_one.push_back(i);
        }
        else if (arr[i] == 0)
        {
            zero.push_back(i);
        }
    }

    int a = 0;
    int b = 0;
    int s_zero = zero.size();
    int s_two = neg_two.size();
    int s_one = neg_one.size();

    if (zero.size() == 0)
    {
        if ((s_two + s_one) % 2 != 0)
        {
            if (!neg_two.empty() && !neg_one.empty())
            {
                int s_two = neg_two.size();
                int s_one = neg_one.size();

                if (neg_one[0] < neg_two[0] && neg_one[s_one - 1] > neg_two[s_two - 1])
                {
                    if (neg_one[0] + 1 < n - neg_one[s_one - 1])
                    {
                        a = neg_one[0] + 1;
                        b = 0;
                    }
                    else
                    {
                        a = 0;
                        b = n - neg_one[s_one - 1];
                    }
                }
                else if (neg_one[0] > neg_two[0] && neg_one[s_one - 1] > neg_two[s_two - 1])
                {
                    a = 0;
                    b = n - neg_one[s_one - 1];
                }
                else if (neg_one[0] < neg_two[0] && neg_one[s_one - 1] < neg_two[s_two - 1])
                {
                    a = neg_one[0] + 1;
                    b = 0;
                }
                else
                {
                    if (neg_two[0] + 1 < n - neg_two[s_two - 1])
                    {
                        a = neg_two[0] + 1;
                        b = 0;
                    }
                    else
                    {
                        a = 0;
                        b = n - neg_two[s_two - 1];
                    }
                }
            }
            else if (neg_one.empty())
            {
                if (neg_two[0] + 1 < n - neg_two[s_two - 1])
                {
                    a = neg_two[0] + 1;
                    b = 0;
                }
                else
                {
                    a = 0;
                    b = n - neg_two[s_two - 1];
                }
            }
            else if (neg_two.empty())
            {
                if (neg_one[0] + 1 < n - neg_one[s_one - 1])
                {
                    a = neg_one[0] + 1;
                    b = 0;
                }
                else
                {
                    a = 0;
                    b = n - neg_one[s_one - 1];
                }
            }
        }
    }
    else
    {
        if (s_zero == 1)
        {
            if (zero[0] + 1 < n - zero[0])
            {
                a = zero[0] + 1;
                b = 0;

                for (int i = 0; i < s_one; i++)
                {
                    if (neg_one[i] < zero[0])
                    {
                        neg_one.erase(neg_one.begin() + i);
                    }
                }

                for (int i = 0; i < s_two; i++)
                {
                    if (neg_two[i] < zero[0])
                    {
                        neg_two.erase(neg_two.begin() + i);
                    }
                }
            }
            else
            {
                a = 0;
                b = n - zero[0];

                for (int i = 0; i < s_one; i++)
                {
                    if (neg_one[i] > zero[0])
                    {
                        neg_one.erase(neg_one.begin() + i);
                    }
                }

                for (int i = 0; i < s_two; i++)
                {
                    if (neg_two[i] > zero[0])
                    {
                        neg_two.erase(neg_two.begin() + i);
                    }
                }
            }

            s_two = neg_two.size();
            s_one = neg_one.size();

            int start = zero[0];
            int end = zero[0];

            if ((s_two + s_one) % 2 != 0)
            {
                if (!neg_two.empty() && !neg_one.empty())
                {
                    int s_two = neg_two.size();
                    int s_one = neg_one.size();

                    if (neg_one[0] < neg_two[0] && neg_one[s_one - 1] > neg_two[s_two - 1])
                    {
                        if (neg_one[0] + 1 < n - neg_one[s_one - 1])
                        {
                            a += (neg_one[0] + 1) - start;
                            b += 0;
                        }
                        else
                        {
                            a += 0;
                            b += end - neg_one[s_one - 1];
                        }
                    }
                    else if (neg_one[0] > neg_two[0] && neg_one[s_one - 1] > neg_two[s_two - 1])
                    {
                        a += 0;
                        b += end - neg_one[s_one - 1];
                    }
                    else if (neg_one[0] < neg_two[0] && neg_one[s_one - 1] < neg_two[s_two - 1])
                    {
                        a += (neg_one[0] + 1) - start;
                        b += 0;
                    }
                    else
                    {
                        if (neg_two[0] + 1 < n - neg_two[s_two - 1])
                        {
                            a += (neg_one[0] + 1) - start;
                            b += 0;
                        }
                        else
                        {
                            a += 0;
                            b += end - neg_one[s_one - 1];
                        }
                    }
                }
                else if (neg_one.empty())
                {
                    if (neg_two[0] + 1 < n - neg_two[s_two - 1])
                    {
                        a += (neg_one[0] + 1) - start;
                        b += 0;
                    }
                    else
                    {
                        a += 0;
                        b += end - neg_one[s_one - 1];
                    }
                }
                else if (neg_two.empty())
                {
                    if (neg_one[0] + 1 < n - neg_one[s_one - 1])
                    {
                        a += (neg_one[0] + 1) - start;
                        b += 0;
                    }
                    else
                    {
                        a += 0;
                        b += end - neg_one[s_one - 1];
                    }
                }
            }
        }
        else
        {
            int max = 0;
            int start = 0;
            int end = start + 1;

            for (int i = 0; i < s_zero - 1; i++)
            {
                if (zero[i + 1] - zero[i] > max)
                {
                    start = i;
                    end = start + 1;
                }
            }

            a = start + 1;
            b = n - end;

            for (int i = 0; i < s_one; i++)
            {
                if (neg_one[i] < start)
                {
                    neg_one.erase(neg_one.begin() + i);
                }
            }

            for (int i = 0; i < s_two; i++)
            {
                if (neg_two[i] < start)
                {
                    neg_two.erase(neg_two.begin() + i);
                }
            }

            for (int i = 0; i < s_one; i++)
            {
                if (neg_one[i] > end)
                {
                    neg_one.erase(neg_one.begin() + i);
                }
            }

            for (int i = 0; i < s_two; i++)
            {
                if (neg_two[i] > end)
                {
                    neg_two.erase(neg_two.begin() + i);
                }
            }

            s_two = neg_two.size();
            s_one = neg_one.size();

            if ((s_two + s_one) % 2 != 0)
            {
                if (!neg_two.empty() && !neg_one.empty())
                {
                    int s_two = neg_two.size();
                    int s_one = neg_one.size();

                    if (neg_one[0] < neg_two[0] && neg_one[s_one - 1] > neg_two[s_two - 1])
                    {
                        if (neg_one[0] + 1 < n - neg_one[s_one - 1])
                        {
                            a += (neg_one[0] + 1) - start;
                            b += 0;
                        }
                        else
                        {
                            a += 0;
                            b += end - neg_one[s_one - 1];
                        }
                    }
                    else if (neg_one[0] > neg_two[0] && neg_one[s_one - 1] > neg_two[s_two - 1])
                    {
                        a += 0;
                        b += end - neg_one[s_one - 1];
                    }
                    else if (neg_one[0] < neg_two[0] && neg_one[s_one - 1] < neg_two[s_two - 1])
                    {
                        a += (neg_one[0] + 1) - start;
                        b += 0;
                    }
                    else
                    {
                        if (neg_two[0] + 1 < n - neg_two[s_two - 1])
                        {
                            a += (neg_one[0] + 1) - start;
                            b += 0;
                        }
                        else
                        {
                            a += 0;
                            b += end - neg_one[s_one - 1];
                        }
                    }
                }
                else if (neg_one.empty())
                {
                    if (neg_two[0] + 1 < n - neg_two[s_two - 1])
                    {
                        a += (neg_one[0] + 1) - start;
                        b += 0;
                    }
                    else
                    {
                        a += 0;
                        b += end - neg_one[s_one - 1];
                    }
                }
                else if (neg_two.empty())
                {
                    if (neg_one[0] + 1 < n - neg_one[s_one - 1])
                    {
                        a += (neg_one[0] + 1) - start;
                        b += 0;
                    }
                    else
                    {
                        a += 0;
                        b += end - neg_one[s_one - 1];
                    }
                }
            }
        }
    }

    cout << a << " " << b << endl;
    return;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }

    return 0;
}