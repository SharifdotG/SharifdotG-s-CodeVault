#include <bits/stdc++.h>

using namespace std;

int main() {
    int height, width;
    
    while (cin >> height >> width && height != 0 && width != 0) {
        char character;
        int area = 0;
        
        for (int i = 0; i < height; i++) {
            int count = 0;
            
            for (int j = 0; j < width; j++) {
                cin >> character;
                
                if (character == '.') {
                    count++;
                }
            }
            
            area += count;
        }
        
        cout << area << endl;
    }
    
    return 0;
}