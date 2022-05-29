#include <iostream>

using namespace std;

int main()
{
    int ar[21] = {0,1,16,12,8,4,19,15,11,7,3,18,14,10,6,2,17,13,9,5,20};

    int res[21];

    for (int i = 1; i < 21; i++) {
        if ((i)%2 == 0) {
            res[10 + (i)/2] = ar[i];
        } else {
            res[(i+1)/2] = ar[i];
        }
    }

    for (int i = 1; i < 21; i++) {
        cout << res[i] << ",";
    }

    cout << endl;

    return 0;
}