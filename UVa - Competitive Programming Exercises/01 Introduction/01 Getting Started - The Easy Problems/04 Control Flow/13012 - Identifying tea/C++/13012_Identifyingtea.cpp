#include <bits/stdc++.h>

using namespace std;

int main() {
    int tea, answer, count;
    
    while (cin >> tea) {
        count = 0;
        
        for (int i = 0; i < 5; i++) {
            cin >> answer;
            if (answer == tea) count++;
        }

        cout << count << endl;
    }
    
    return 0;
}