#include <bits/stdc++.h>

using namespace std;

int main() {
    int roomsInHotel, bookedRooms;
    cin >> roomsInHotel >> bookedRooms;

    bool rooms[roomsInHotel];
    for (int i = 0; i < roomsInHotel; i++) {
        rooms[i] = false;
    }

    for (int i = 0; i < bookedRooms; i++) {
        int roomNumber;
        cin >> roomNumber;
        
        rooms[roomNumber - 1] = true;
    }

    for (int i = 0; i < roomsInHotel; i++) {
        if (!rooms[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "too late" << endl;

    return 0;
}
