#include <iostream>
using namespace std;

int main() {
    int year;
    cin >> year;
    while (true) {
        int d1,d2,d3,d4;
        year++;
        d1 = year % 10;
        d2 = (year/10) % 10;
        d3 = (year/100) % 10;
        d4 = (year/1000);
        bool c1 = d1 != d2 && d1 != d3 && d1 != d4;
        bool c2 = d3 != d2 && d2 != d4;
        bool c3 = d3 != d4;
        if (c1 && c2 && c3)
            break;
    }
    cout << year << endl;
}
