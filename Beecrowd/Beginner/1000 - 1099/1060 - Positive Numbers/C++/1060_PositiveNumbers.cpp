#include <bits/stdc++.h>

using namespace std;

int main() {
    int positiveNumbers = 0;
    double number;

    for (int i = 0; i < 6; i++) {
        cin >> number;
        
        if (number > 0) positiveNumbers++;
    }

    cout << positiveNumbers << " valores positivos" << endl;
    
    return 0;
}