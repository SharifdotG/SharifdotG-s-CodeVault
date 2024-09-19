#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfRooms;
    cin >> numberOfRooms;

    int numberOfFreeRooms = 0;

    while (numberOfRooms--) {
        int numberOfPeople, capacity;
        cin >> numberOfPeople >> capacity;

        if (capacity - numberOfPeople >= 2) numberOfFreeRooms++;
    }

    cout << numberOfFreeRooms;
    
    return 0;
}