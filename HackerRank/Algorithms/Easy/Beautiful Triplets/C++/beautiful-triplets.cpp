#include <bits/stdc++.h>

using namespace std;

int main() {
    int length, difference;
    cin >> length >> difference;

    vector<int> numbers(length);
    for (int i = 0; i < length; i++) {
        cin >> numbers[i];
    }

    int beautifulTriplets = 0;
    for (int i = 0; i < length - 2; i++) {
        for (int j = i + 1; j < length - 1; j++) {
            if (numbers[j] - numbers[i] == difference) {
                for (int k = j + 1; k < length; k++) {
                    if (numbers[k] - numbers[j] == difference) {
                        beautifulTriplets++;
                    }
                }
            }
        }
    }

    cout << beautifulTriplets << endl;

    return 0;
}