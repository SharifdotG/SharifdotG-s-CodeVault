#include <bits/stdc++.h>

using namespace std;

int main() {
    string date;
    getline(cin, date);

    size_t divideSlash = date.find("/");
    
    int dayOrMonth1 = stoi(date.substr(0, divideSlash));
    int dayOrMonth2 = stoi(date.substr(divideSlash + 1));

    if (dayOrMonth1 > 12) cout << "EU" << endl;
    else if (dayOrMonth2 > 12) cout << "US" << endl;
    else cout << "either" << endl;

    return 0;
}