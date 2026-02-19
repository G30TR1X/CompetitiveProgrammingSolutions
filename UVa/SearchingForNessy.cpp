#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >> n >> m;
        
        long long int answer = (n % 3 != 2 ? ceil((float)(n-1)/3) : ceil((float)(n-2)/3)) * (m % 3 != 2 ? ceil((float)(m-1)/3) : ceil((float)(m-2)/3));
        cout << answer << endl;
    }
}
