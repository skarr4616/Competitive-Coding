#include <iostream>
#include <string>

using namespace std;

int isNotEven(int num) 
{
    string num_str = to_string(num);

    string s(1, num_str[0]);

    if (stoi(s)%2 == 0) {
        return 1;
    } else {
        for (int i = 1; i < num_str.length() - 1; i++) {
            string s(1, num_str[i]);

            if (stoi(s)%2 == 0) {
                return 2;
            }
        }
    }

    return -1;
}

void solve()
{
    long int num;
    cin >> num;

    if (num%2 == 0) {
        cout << 0;
    } else {
        cout << isNotEven(num);
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }
}

