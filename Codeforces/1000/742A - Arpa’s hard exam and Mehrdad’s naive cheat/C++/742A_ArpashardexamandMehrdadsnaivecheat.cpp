#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 1 << endl;
    } else {
        int lastDigit = n % 4;
        int result = 0;

        switch (lastDigit) {
            case 0:
                result = 6;
                break;
            case 1:
                result = 8;
                break;
            case 2:
                result = 4;
                break;
            case 3:
                result = 2;
                break;
        }

        cout << result << endl;
    }
    
    return 0;
}