#include <bits/stdc++.h>
#include <functional>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

const int MOD = 1e9 + 7;
const int MAX_ARRAY_SIZE = 1e6 + 1;
ll t,n,m,k,x,y,z,u,v;
ll a[MAX_ARRAY_SIZE], b[MAX_ARRAY_SIZE];
string s;
vvl graph(MAX_ARRAY_SIZE);
vb vis(MAX_ARRAY_SIZE);

class comp1 {
    public:
    bool operator() (pair<pair<ll,ll>, string> a, pair<pair<ll,ll>, string> b) {
        return a.second < b.second;
    }
};

class comp2 {
    public:
    bool operator() (pair<pair<ll,ll>, string> a, pair<pair<ll,ll>, string> b) {
        return a.first.first > b.first.first;
    }
};

class comp3 {
    public:
    bool operator() (pair<pair<ll,ll>, string> a, pair<pair<ll,ll>, string> b) {
        return a.first.second < b.first.second;
    }
};

void solve()
{
    cin >> n;
    vector<pair<pair<ll,ll>, string>> score;
    for (ll i = 0; i < n; ++i)
    {
        cin >> s >> x >> y >> z >> u;
        ll finalScore = x+z, penaltyScore = y+u;
        score.push_back({{finalScore, penaltyScore}, s});
    }

    sort(score.begin(), score.end(), comp2());
    for (ll i = 1; i < n; ++i)
    {
        if (score[i].first.first == score[i-1].first.first)
        {
            ll currScore = score[i-1].first.first;
            ll j = i;
            for (; j < n && score[j].first.first == currScore; ++j);

            sort(score.begin()+(i-1), score.begin()+j, comp3());
        }
    }

    for (ll i = 1; i < n; ++i)
    {
        if (score[i].first == score[i-1].first)
        {
            pair<ll, ll> currScore = score[i-1].first;
            ll j = i;
            for (; j < n && score[j].first == currScore; ++j);

            sort(score.begin()+(i-1), score.begin()+j, comp1());
        }
    }

    for (ll i = 0; i < n; ++i)
        cout << score[i].second << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //freopen("input.txt", "r", stdin);

    solve();

    return 0;
}
