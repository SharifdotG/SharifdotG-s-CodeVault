#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfCards, sereja = 0, dima = 0;
    cin >> numberOfCards;

    int cards[numberOfCards];
    for (int i = 0; i < numberOfCards; i++) cin >> cards[i];

    int left = 0, right = numberOfCards - 1;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            sereja += cards[left];
            left++;
        } else {
            sereja += cards[right];
            right--;
        }

        if (left > right) break;

        if (cards[left] > cards[right]) {
            dima += cards[left];
            left++;
        } else {
            dima += cards[right];
            right--;
        }
    }

    cout << sereja << " " << dima;

    return 0;
}