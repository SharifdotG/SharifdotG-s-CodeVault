#include <bits/stdc++.h>

using namespace std;

int main() {
    int notices;
    cin >> notices;

    int buildingStructure[4][3][10] = {0};
    for (int i = 0; i < notices; i++) {
        int building, floor, room, persons;
        cin >> building >> floor >> room >> persons;

        buildingStructure[building - 1][floor - 1][room - 1] += persons;
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) { 
            for (int k = 0; k < 10; k++) {
                cout << " " << buildingStructure[i][j][k];
            }

            cout << endl;
        }

        if (i != 3) {
            cout << "####################" << endl;
        }
    }
    
    return 0;
}