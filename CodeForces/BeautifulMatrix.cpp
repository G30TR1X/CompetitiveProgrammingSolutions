#include <iostream>
using namespace std;

int main() {
    int input,x,y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> input;
            if (input) {
                x = i;
                y = j;
            }
        }
    }

    cout << (abs(2-x) + abs(2-y)) << endl;
}
