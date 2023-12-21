#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int arrayLength;
        cin >> arrayLength;

        set<int> elements;
        for (int i = 0; i < arrayLength; i++) {
            int element;
            cin >> element;

            elements.insert(element);
        }

        if (elements.size() == arrayLength) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }

    return 0;
}