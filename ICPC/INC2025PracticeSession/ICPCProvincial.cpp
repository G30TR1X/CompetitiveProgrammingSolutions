#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll t,n,m,k;
ll a[100005];

void solve() {
    cin >> n;
    for (ll i = 0; i < 3*n; ++i)
        cin >> a[i];

    sort(a, a+3*n);
    cout << a[n] << endl;
}

int main() {
    solve();

    return 0;
}
