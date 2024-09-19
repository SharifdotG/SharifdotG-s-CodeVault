#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<long double> numbers;
    long double number;

    while (cin >> number) {
        numbers.push_back(number);
    }

    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << fixed << setprecision(4) << sqrt(numbers[i]) << endl;
    }
    
    return 0;
}