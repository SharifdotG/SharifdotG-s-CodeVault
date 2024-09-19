#include <bits/stdc++.h>

using namespace std;

int main() {
    int bags, bennisBag;
    cin >> bags >> bennisBag;

    int bagList[bags];
    for (int i = 0; i < bags; i++) {
        cin >> bagList[i];
    }

    if (bennisBag == bagList[0]) {
        cout << "fyrst" << endl;
    } else if (bennisBag == bagList[1]) {
        cout << "naestfyrst" << endl;
    } else {
        for (int i = 0; i < bags; i++) {
            if (bennisBag == bagList[i]) {
                cout << i + 1 << " fyrst" << endl;
                break;
            }
        }
    }

    return 0;
}