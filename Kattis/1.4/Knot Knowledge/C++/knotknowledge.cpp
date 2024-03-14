#include <bits/stdc++.h>

using namespace std;

int main() {
    int knots;
    cin >> knots;

    int knotsNeedToKnow[knots];
    int knotsLearned[knots - 1];

    for (int i = 0; i < knots; i++) {
        cin >> knotsNeedToKnow[i];
    }

    for (int i = 0; i < knots - 1; i++) {
        cin >> knotsLearned[i];
    }

    int knotNotLearned;

    for (int i = 0; i < knots; i++) {
        bool isLearned = false;

        for (int j = 0; j < knots - 1; j++) {
            if (knotsNeedToKnow[i] == knotsLearned[j]) {
                isLearned = true;
                break;
            }
        }

        if (!isLearned) {
            knotNotLearned = knotsNeedToKnow[i];
            break;
        }
    }

    cout << knotNotLearned << endl;

    return 0;
}