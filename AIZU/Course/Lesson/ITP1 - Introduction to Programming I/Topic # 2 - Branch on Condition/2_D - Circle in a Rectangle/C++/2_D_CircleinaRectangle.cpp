#include <bits/stdc++.h>

using namespace std;

int main() {
    int width, height, xCordinate, yCordinate, radius;
    cin >> width >> height >> xCordinate >> yCordinate >> radius;

    if (xCordinate - radius < 0 || xCordinate + radius > width ||
        yCordinate - radius < 0 || yCordinate + radius > height) {
        cout << "No" << endl;
    } else cout << "Yes" << endl;
    
    return 0;
}