#include <bits/stdc++.h>
using namespace std;

string decimalConversion(int number)
{
    string binary = "";

    for (int i = number; i > 0; i /= 2)
    {
        if (i % 2 == 0)
        {
            binary = "0" + binary;
        }
        else
        {
            binary = "1" + binary;
        }
    }

    return binary;
}

int binaryConversion(string binary)
{
    int finalConversion = 0;
    int power = binary.size() - 1;

    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == '1')
        {
            finalConversion += (int)(pow(2,power));
        }
        power--;
    }

    return finalConversion;
}

string addBinary(string a, string b) {
    int addition =  binaryConversion(a) + binaryConversion(b);
    return decimalConversion(addition);
}

int main()
{
    cout << addBinary("11", "1") << endl;

    return 0;
}