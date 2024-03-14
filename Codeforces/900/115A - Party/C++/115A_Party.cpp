#include <bits/stdc++.h>

using namespace std;

int main() {
    int employees;
    cin >> employees;
    
    int hierarchy[employees];
    for (int i = 0; i < employees; i++) {
        cin >> hierarchy[i];
    }

    int maxLevel = 0;

    for (int i = 0; i < employees; i++) {
        int level = 1, j = i;

        while (hierarchy[j] != -1) {
            level++;
            j = hierarchy[j] - 1;
        }
        
        if (level > maxLevel) maxLevel = level;
    }

    cout << maxLevel << endl;
    
    return 0;
}