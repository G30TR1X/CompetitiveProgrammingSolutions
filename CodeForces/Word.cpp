#include <iostream>
using namespace std;

int main() {
    string s;
    int u = 0, l = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            u++;
        else
            l++;
    }
    if (u > l) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
    }

    cout << s << endl;
}
