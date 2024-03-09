#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfPeople;
    cin >> numberOfPeople;

    int lineup[numberOfPeople];

    lineup[0] = 1;

    for (int i = 1; i < numberOfPeople; i++) {
        int position;
        cin >> position;

        lineup[position + 1] = i + 1;
    }

    for (int i = 0; i < numberOfPeople; i++) {
        cout << lineup[i] << " ";
    }

    return 0;
}
