#include <bits/stdc++.h>

using namespace std;

int main() {
    int wideSpeed, roads;
    cin >> wideSpeed >> roads;

    while (roads--) {
        string roadName;
        int maxWindSpeed;
        cin >> roadName >> maxWindSpeed;

        if (wideSpeed <= maxWindSpeed) cout << roadName << " opin" << endl;
        else cout << roadName << " lokud" << endl;
    }

    return 0;
}