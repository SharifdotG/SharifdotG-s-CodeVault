#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int in = 0, out = 0;

    for (int i = 0; i < number; i++) {
        int value;
        cin >> value;

        if (value >= 10 && value <= 20) in++;
        else out++;
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;
    
    return 0;
}