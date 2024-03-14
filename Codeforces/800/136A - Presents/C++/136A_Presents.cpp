#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfFriends;
    cin >> numberOfFriends;

    int friends[numberOfFriends];

    for (int i = 0; i < numberOfFriends; i++) {
        int friendNumber;
        cin >> friendNumber;

        friends[friendNumber - 1] = i + 1;
    }

    for (int i = 0; i < numberOfFriends; i++) {
        cout << friends[i] << " ";
    }
    
    return 0;
}