#include <bits/stdc++.h>

using namespace std;

struct Person{
    int a;
    int b;
};

void solve() 
{
    int n;
    cin >> n;

    // vector<int> arr;
    // for (int i = 0; i < n; i++)
    // {
    //     arr.push_back(i+1);
    // }

    // int l;
    // int rep;
    // Person temp;
    // vector<Person> ans;

    // while(arr.size() > 1)
    // {
    //     l = arr.size();

    //     if (l%2 == 1)
    //     {
    //         rep = arr[l-1] + arr[l/2];

    //         if (rep%2 == 0)
    //         {
    //             rep = rep/2;
    //         }
    //         else
    //         {
    //             rep = rep/2 + 1;
    //         }

    //         temp.a = arr[l-1];
    //         temp.b = arr[l/2];

    //         ans.push_back(temp);

    //         arr.erase(arr.begin() + l-1);
    //         arr.erase(arr.begin() + l/2);
    //     }
    //     else
    //     {
    //         rep = arr[l-1] + arr[l/2 - 1];
            
    //         if (rep%2 == 0)
    //         {
    //             rep = rep/2;
    //         }
    //         else
    //         {
    //             rep = rep/2 + 1;
    //         }

    //         temp.a = arr[l-1];
    //         temp.b = arr[l/2 - 1];
            
    //         ans.push_back(temp);

    //         arr.erase(arr.begin() + l-1);
    //         arr.erase(arr.begin() + l/2 - 1);
    //     }

    //     auto it = upper_bound(arr.begin(), arr.end(), rep);
    //     arr.insert(it, rep);
    // }

    int a = n-1;
    int b = n;

    cout << 2 << "\n";
    cout << a << " " << b << "\n";

    while(a != 1)
    {
        a = a-1;
        cout << a << " " << b << "\n";
        b = b-1; 
    }

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