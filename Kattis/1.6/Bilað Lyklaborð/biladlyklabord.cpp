#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    if (input.empty()) {
        cout << input << endl;

        return 0;
    }

    string result;
    result.reserve(input.size());

    result += input[0];

    for (size_t i = 1; i < input.size(); i++) {
        if (input[i] != result.back()) {
            result += input[i];
        }
    }

    cout << result << endl;

    return 0;
}