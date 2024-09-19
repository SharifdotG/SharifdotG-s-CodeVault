#include <bits/stdc++.h>

using namespace std;

int main() {
    double number, sum = 0;
    int count = 0;

    for (int i = 0; i < 6; i++) {
        cin >> number;
        
        if (number > 0) {
            count++;
            sum += number;
        }
    }

    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / count << endl;
    
    return 0;
}