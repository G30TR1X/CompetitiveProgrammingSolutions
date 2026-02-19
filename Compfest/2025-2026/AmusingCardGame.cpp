#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>

ll logba(ll a, ll b);
ll powMOD(ll a, ll b);
ll addMOD(ll a, ll b);
ll subMOD(ll a, ll b);
ll mulMOD(ll a, ll b);
ll divMOD(ll a, ll b);

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;

void solve()
{
    cin >> n;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];
    
    for (ll i = 0; i < n; ++i)
        cin >> b[i];

    sort(a, a+n);
    sort(b, b+n);

    ll chanek = 0, ganesh = 0;
    for (ll i = n-1; i >= 0; --i)
    {
        if (a[i] > b[i])
            chanek += a[i] - b[i];
        else
            ganesh += b[i] - a[i];
    }

    if (chanek == ganesh)
        cout << "Mabar" << endl;
    else if (chanek > ganesh)
        cout << "Pak Chanek" << endl;
    else
        cout << "Pak Ganesh" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
