#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        set<string> cities;
        int n;
        cin >> n;

        while (n--) {
            string city;
            cin >> city;

            cities.insert(city);
        }

        cout << cities.size() << endl;
    }

    return 0;
}