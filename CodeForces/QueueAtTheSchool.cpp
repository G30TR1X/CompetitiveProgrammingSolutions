#include <iostream>
using namespace std;

int main() {
    int n,t;
    string s, scopy;
    cin >> n >> t>>s;
    scopy = s;
    for (int j = 0; j < t; j++) {
        for (int i = n-1; i >=0; i--) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                char tmp = scopy[i];
                scopy[i] = scopy[i+1];
                scopy[i+1] = tmp;
            }
        }
        s = scopy;
    }

    cout << s << endl;
}
