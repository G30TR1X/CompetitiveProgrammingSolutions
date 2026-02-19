#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

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
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

void solve()
{
    cin >> n >> s;
    ll a,c,g,t,unknown;
    a = c = g = t = unknown = 0;
    for (ll i = 0; i < n; i++)
    {
        switch (s[i])
        {
            case 'A':
                a++;
                break;
            case 'C':
                c++;
                break;
            case 'G':
                g++;
                break;
            case 'T':
                t++;
                break;
            default:
                unknown++;
                break;
        }
    }

    ll maxGene = max(a, max(c, max(g, t)));
    ll needA = maxGene - a, needC = maxGene - c, needG = maxGene - g, needT = maxGene - t;

    if ((needA + needC + needG + needT) > unknown)
    {
        cout << "===" << endl;
        return;
    }

    ll unknownLeft = (unknown - (needA + needC + needG + needT) > 0) ? unknown - (needA + needC + needG + needT) : 0;

    if (unknownLeft % 4 != 0)
    {
        cout << "===" << endl;
        return;
    }

    ll extra = unknownLeft / 4;
    needA += extra, needC += extra, needG += extra, needT += extra;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '?')
        {
            if (needA > 0)
                s[i] = 'A', needA--;
            else if (needC > 0)
                s[i] = 'C', needC--;
            else if (needG > 0)
                s[i] = 'G', needG--;
            else if (needT > 0)
                s[i] = 'T', needT--;
        }
    }

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
