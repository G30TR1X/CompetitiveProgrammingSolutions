#include <iostream>
using namespace std;

int main() {
    int n, m, i;
    cin >> n >> m;
    while (true) {
        bool isPrime = true;
        for (int i = 2; i < n+1; i++) {
            if ((n+1) % i == 0)
                isPrime = false;
        }
        if (isPrime)
            break;
        n++;
    }

    if (n+1 == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
