#include <bits/stdc++.h>

using namespace std;

int main() {
    string language;
    int i = 1;

    while (getline(cin, language)) {
        if (language == "#") {
            break;
        }

        cout << "Case " << i << ": ";

        if (language == "HELLO") {
            cout << "ENGLISH" << endl;
        } else if (language == "HOLA") {
            cout << "SPANISH" << endl;
        } else if (language == "HALLO") {
            cout << "GERMAN" << endl;
        } else if (language == "BONJOUR") {
            cout << "FRENCH" << endl;
        } else if (language == "CIAO") {
            cout << "ITALIAN" << endl;
        } else if (language == "ZDRAVSTVUJTE") {
            cout << "RUSSIAN" << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }

        i++;
    }
    
    return 0;
}