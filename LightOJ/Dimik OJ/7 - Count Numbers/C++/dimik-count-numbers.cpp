#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();

    for (int i = 0; i < testCases; i++) {
        string number;
        getline(cin, number);
        
        int count = 0;
        
        for (int j = 0; j < number.length(); j++) {
            if (isdigit(number[j])) {
                count++;

                while (isdigit(number[j])) {
                    j++;
                }
            }
        }

        cout << count << endl;
    }
    
    return 0;
}