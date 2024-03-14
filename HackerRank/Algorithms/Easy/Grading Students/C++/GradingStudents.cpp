#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int grades[number];

    for (int i = 0; i < number; i++) {
        cin >> grades[i];

        if (grades[i] >= 38) {
            int nextMultipleOfFive = grades[i] + (5 - grades[i] % 5);

            if (nextMultipleOfFive - grades[i] < 3) {
                grades[i] = nextMultipleOfFive;
            }
        }
    }

    for (int i = 0; i < number; i++) {
        cout << grades[i] << endl;
    }
    
    return 0;
}