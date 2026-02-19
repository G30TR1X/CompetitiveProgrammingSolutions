#include <iostream>
using namespace std;

int main() {
    string borze, finalNum = "";
    cin >> borze;
    for (int i = 0; i < borze.size(); i++) {
        if (borze[i] == '-') {
            if (borze[i+1] == '.')
                finalNum += "1";
            else
                finalNum += "2";
            i++;
        } else {
            finalNum += "0";
        }
    }

    cout << finalNum << endl;
}
