#include <bits/stdc++.h>

using namespace std;

int main() {
    int roll;
    cin >> roll;

    int friendsCanMake = 0;
    for (int i = 1; i <= roll / 2; i++) {
        if (roll % i == 0) {
            friendsCanMake++;
        }
    }

    cout << friendsCanMake << endl;

    return 0;
}