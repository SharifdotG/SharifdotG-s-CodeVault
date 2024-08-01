#include <bits/stdc++.h>

using namespace std;

long long int power(int base, int exponent) {
    long long int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    
    return result;
}

bool isKaprekarNumber(int number) {
    long long int squaredNumber = power(number, 2);
    string squaredNumberString = to_string(squaredNumber);
    int squaredNumberStringLength = squaredNumberString.length();
    int d = to_string(number).length();
    string left = squaredNumberString.substr(0, squaredNumberStringLength - d);
    string right = squaredNumberString.substr(squaredNumberStringLength - d, d);
    int leftNumber = left.empty() ? 0 : stoi(left);
    int rightNumber = right.empty() ? 0 : stoi(right);
    return leftNumber + rightNumber == number;
}

int main() {
    int p, q;
    cin >> p >> q;

    vector<int> kaprekarNumbers;
    for (int i = p; i <= q; i++) {
        if (isKaprekarNumber(i)) {
            kaprekarNumbers.push_back(i);
        }
    }

    if (kaprekarNumbers.empty()) {
        cout << "INVALID RANGE" << endl;
    } else {
        for (int i = 0; i < kaprekarNumbers.size(); i++) {
            cout << kaprekarNumbers[i];

            if (i != kaprekarNumbers.size() - 1) {
                cout << " ";
            }
        }
        
        cout << endl;
    }

    return 0;
}