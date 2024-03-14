#include <bits/stdc++.h>

using namespace std;

int main() {
    string drmMessage;
    cin >> drmMessage;

    int length = drmMessage.length();
    int halfLength = length / 2;

    string firstHalf = drmMessage.substr(0, halfLength);
    string secondHalf = drmMessage.substr(halfLength, length);

    int firstHalfSum = 0;
    int secondHalfSum = 0;

    for (int i = 0; i < halfLength; i++) {
        firstHalfSum += firstHalf[i] - 'A';
        secondHalfSum += secondHalf[i] - 'A';
    }

    for (int i = 0; i < halfLength; i++) {
        firstHalf[i] = (firstHalf[i] - 'A' + firstHalfSum) % 26 + 'A';
        secondHalf[i] = (secondHalf[i] - 'A' + secondHalfSum) % 26 + 'A';
    }

    for (int i = 0; i < halfLength; i++) {
        firstHalf[i] = (firstHalf[i] - 'A' + secondHalf[i] - 'A') % 26 + 'A';
    }

    cout << firstHalf << endl;

    return 0;
}