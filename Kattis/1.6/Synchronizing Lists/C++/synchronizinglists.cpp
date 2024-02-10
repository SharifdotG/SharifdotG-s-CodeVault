#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;

    while (cin >> number && number != 0) {
        int first[number], temp[number], second[number], index;

        for (int i = 0; i < number; i++) {
            cin >> first[i];
            temp[i] = first[i];
        }

        for (int i = 0; i < number; i++) {
            cin >> second[i];
        }

        sort(temp, temp + number);
        sort(second, second + number);

        for (int i = 0; i < number; i++) {
            index = upper_bound(temp, temp + number, first[i]) - temp - 1;
            cout << second[index] << endl;
        }

        cout << endl;
    }

    return 0;
}
