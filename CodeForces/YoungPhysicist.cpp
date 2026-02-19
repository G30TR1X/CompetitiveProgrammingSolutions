#include <iostream>
using namespace std;

int main() {
    long long int n, fv1 = 0,fv2=0,fv3 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int v1,v2,v3;
        cin >> v1 >> v2 >> v3;
        fv1 += v1;
        fv2 += v2;
        fv3 += v3;
    }

    if (!(fv1 || fv2 || fv3))
        cout << "YES" << endl;
    else
        cout <<"NO" << endl;
}
