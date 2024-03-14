#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfLayers;
    cin >> numberOfLayers;

    string hate = "I hate ";
    string love = "I love ";
    string that = "that ";
    string it = "it";

    string result = "";

    for (int i = 0; i < numberOfLayers; i++) {
        if (i % 2 == 0) {
            result += hate;
        } else {
            result += love;
        }

        if (i != numberOfLayers - 1) {
            result += that;
        }
    }

    result += it;

    cout << result;
    
    return 0;
}