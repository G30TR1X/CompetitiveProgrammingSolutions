#include <bits/stdc++.h>
#include <ios>
using namespace std;

#define ll long long
#define ull unsigned long long

const ll array_size = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[array_size],b[array_size],c[array_size];
string s;

void solve()
{
    cin >> n >> x >> s;
    if (x == 1 || x == n)
    {
        cout << 1 << endl;
        return;
    }

    --x;
    ll leftWall = x-1, rightWall = x+1;
    while (leftWall >= 0 && s[leftWall] != '#')
        leftWall--;

    while (rightWall < n && s[rightWall] != '#')
        rightWall++;

    if (leftWall == -1 && rightWall == n)
        cout << 1 << endl;
    else
        cout << max(min(x+1, n-rightWall+1), min(leftWall+2, n-x)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t;
    while (t--)
        solve();

    return 0;
}
