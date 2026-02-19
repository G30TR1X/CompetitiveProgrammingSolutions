#include <iostream>
using namespace std;

int main() {
    int n, remove = 0;
    string stone;
    cin >> n >> stone;
    for (int i = 0; i < stone.size()-1; i++) {
        if (stone[i] == stone[i+1])
            remove++;
    }

    cout<<remove<<endl;
}
