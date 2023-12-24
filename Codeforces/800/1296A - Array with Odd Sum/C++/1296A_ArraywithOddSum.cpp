#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int elements, sum = 0, odd = 0, even = 0;
        cin >> elements;

        int array[elements];

        for (int i = 0; i < elements; i++) {
            cin >> array[i];

            sum += array[i];

            if (array[i] % 2 == 0) {
                even++;
            } else odd++;
        }

        if (sum % 2 != 0) {
            cout << "YES" << endl;
        } else if (odd > 0 && even > 0) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    
    return 0;
}