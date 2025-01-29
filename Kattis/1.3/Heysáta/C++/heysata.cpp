#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string needle, haystack;
    cin >> n >> needle >> haystack;

    if (haystack.find(needle) != string::npos) {
        cout << "Unnar fann hana!" << endl;
    } else {
        cout << "Unnar fann hana ekki!" << endl;
    }

    return 0;
}