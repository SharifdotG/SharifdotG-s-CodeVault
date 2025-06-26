#include <bits/stdc++.h>

using namespace std;

int main() {
    int returnDay, returnMonth, returnYear;
    int dueDay, dueMonth, dueYear;
    cin >> returnDay >> returnMonth >> returnYear;
    cin >> dueDay >> dueMonth >> dueYear;

    if (returnYear > dueYear) {
        cout << 10000 << endl;
    } else if (returnYear == dueYear) {
        if (returnMonth > dueMonth) {
            cout << 500 * (returnMonth - dueMonth) << endl;
        } else if (returnMonth == dueMonth) {
            if (returnDay > dueDay) {
                cout << 15 * (returnDay - dueDay) << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << 0 << endl;
    }

    return 0;
}