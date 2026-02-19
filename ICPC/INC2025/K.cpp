#include <bits/stdc++.h>
#include <pthread.h>
#include <unordered_map>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vl vector<ll>
#define vs vector<string>
#define vc vector<char>
#define vb vector<bool>
#define vvl vector<vector<ll>>
#define vvb vector<vector<bool>>

ll t,n,m,k,x,y,z,u,v;
string s;

void solve()
{
    string s; cin >> s; 
    int len = s.length();
    unordered_map<char, int> mp; 
    for (int i = 0; i < len; ++i) {
        mp[s[i]]++; 
    }

    vector<string> ans;
    string front = "", back = "";
    for (auto [c, count] : mp) 
    {
        if (count & 1)
        {
            string substring = "";
            while (mp[c] > 0)
                substring += c, --mp[c];
            ans.push_back(substring);
        }
        else
        {
            while (mp[c] > 0)
                front = front + c, back = c + back, mp[c] -= 2;
        }
    }

    if (ans.size() == 0)
        ans.push_back(front + back);
    else
        ans[0] = back + ans[0] + front;

    cout << ans.size() << endl;
    for (string s : ans)
        cout << s << endl;
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
