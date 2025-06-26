#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int money, cost, numWrappers;
        cin >> money >> cost >> numWrappers;

        int chocolates = money / cost;
        int wrappers = chocolates;

        while (wrappers >= numWrappers) {
            int newChocolates = wrappers / numWrappers;
            chocolates += newChocolates;
            wrappers = newChocolates + (wrappers % numWrappers);
        }

        cout << chocolates << endl;
    }

    return 0;
}