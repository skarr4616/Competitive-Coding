#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr;
    int temp;

    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    long int opp = 0;

    for (long int i = 0; i < arr.size(); i++) 
    {
        for (long int j = i; j < arr.size(); j++)
        {
            int div = __gcd(arr[i], arr[j]);

            if (find(arr.begin(), arr.end(), div) == arr.end())
            {
                arr.push_back(div);
                opp++;
            }
        }
    }

    cout << opp << endl;
}