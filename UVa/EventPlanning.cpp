#include <iostream>
using namespace std;

int main() {
    int P,B,H,W, t = 2;

    while (scanf("%d %d %d %d", &P, &B, &H, &W) == 4) {
        int Hcost, bedAmount, minAmount = 600000, highBed = 0;
        for (int i = 0; i < H; i++) {
            cin >> Hcost;
            for (int j = 0; j < W; j++) {
                cin >> bedAmount;
                highBed = max(highBed, bedAmount);
            }
            if (highBed >= P && (P * Hcost <= B))
                minAmount = min(minAmount, P * Hcost);
        }

        if (minAmount == 600000)
            cout << "stay home" << endl;
        else
            cout << minAmount << endl;
    }
}
