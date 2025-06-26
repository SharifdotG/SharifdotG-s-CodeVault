#include <bits/stdc++.h>

using namespace std;

int main() {
    string number;
    
    while (true) {
        cin >> number;
        
        if (number == "0") break;
        
        int sum = 0;
        
        for (int i = 0; i < number.length(); i++) {
            sum += number[i] - '0';
        }
        
        cout << sum << endl;
    }
    
    return 0;
}