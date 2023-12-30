#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, width;
    
    while (cin >> height >> width) {
        if (height == 0 && width == 0) {
            break;
        }
        
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << "#";
            }

            cout << endl;
        }
        
        cout << endl;
    }
    
    return 0;
}