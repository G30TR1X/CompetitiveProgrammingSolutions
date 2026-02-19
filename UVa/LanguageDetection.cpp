#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    string word;
    while (getline(cin, word), word != "#")
    {
        string language;
        if (word == "HELLO") language = "ENGLISH";
        else if (word == "HOLA") language = "SPANISH";
        else if (word == "HALLO") language = "GERMAN";
        else if (word == "BONJOUR") language = "FRENCH";
        else if (word == "CIAO") language = "ITALIAN";
        else if (word == "ZDRAVSTVUJTE") language = "RUSSIAN";
        else language = "UNKNOWN";

        cout << "Case " << i << ": " << language << endl;
        i++;
    }
}
