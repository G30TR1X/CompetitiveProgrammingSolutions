#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    cin >> n >> m;
    if (n == m)
        cout << "SAMA\n";
    else
        cout << "BEDA " << abs(n-m) << endl;
}
