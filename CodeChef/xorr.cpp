#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    int A[n];
    int B[n];
    
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    
    for (int i = 0; i < n; ++i)
    {
        cin >> B[i];
    }
    
    int xor_i[n];
    for (int i = 0; i < n; ++i)
    {
        xor_i[i] = A[i]^B[i];
    }

    sort(xor_i, xor_i+n);

    int count = 0;
    int num = 1;

    for (int i = 1; i < n; ++i)
    {
        if (xor_i[i] != xor_i[i-1])
        {
            count += (num*(num - 1))/2;
            num = 0;
        }

        num++;
    }
    
    count += (num*(num - 1))/2;

    cout << count << endl;
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
