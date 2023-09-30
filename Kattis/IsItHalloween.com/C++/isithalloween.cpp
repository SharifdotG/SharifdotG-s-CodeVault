#include <bits/stdc++.h>

using namespace std;

int main() {
    string month, date;
    cin >> month >> date;

    if ((month == "OCT" && date == "31") || (month == "DEC" && date == "25")) cout << "yup" << endl;
    else cout << "nope" << endl;

    return 0;
}