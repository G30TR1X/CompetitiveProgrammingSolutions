#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,d;

    while (scanf("%d %d %d %d", &a, &b, &c, &d), (a || b || c || d))
    {
        int turn = 0;

        if (b >= a) turn += 9 * (40 - abs(a-b));
        else turn += 9 * abs(a-b);

        if (b >= c) turn += 9 * (40 - abs(b-c));
        else turn += 9 * abs(b-c);

        if (d >= c) turn += 9 * (40 - abs(d-c));
        else turn += 9 * abs(d-c);

        cout << 1080 + turn << endl;
    }
}
