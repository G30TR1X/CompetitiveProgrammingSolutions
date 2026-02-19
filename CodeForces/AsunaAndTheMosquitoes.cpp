#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        unsigned long long int n, o=0, e=0, sum=0;
        int maxtower = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int input;
            cin >> input;
            if (input % 2 == 1)
                o++;
            else
                e++;
            maxtower = max(maxtower, input);
            sum += input;
        }

        if (o == n || e == n)
            cout << maxtower << endl;
        else
            cout << sum-o+1 << endl;
    }
}
