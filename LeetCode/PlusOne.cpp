#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> digits = {8,9,9,9};
    vector<int> result;
    int digit = digits[digits.size() - 1] + 1;
    int carry = 0;
    if (digit >= 10) {
        carry = digit / 10;
        digit %= 10;
    }
    result.push_back(digit);
    for (int i = digits.size() - 2; i >= 0; i--) {
        digit = digits[i] + carry;
        carry = 0;
        if (digit >= 10) {
            carry = digit / 10;
            digit %= 10;
        }
        result.push_back(digit);
    }
    if (carry > 0) {
        result.push_back(carry);
    }
    reverse(result.begin(), result.end());
    for (int nums : result)
    {
        cout << nums << " ";
    }
}