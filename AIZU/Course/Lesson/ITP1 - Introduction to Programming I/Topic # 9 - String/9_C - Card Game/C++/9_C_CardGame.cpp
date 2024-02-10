#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, taroScore = 0, hanakoScore = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string takahashiCard, aokiCard;
        cin >> takahashiCard >> aokiCard;

        if (takahashiCard > aokiCard) {
            taroScore += 3;
        } else if (takahashiCard < aokiCard) {
            hanakoScore += 3;
        } else taroScore++, hanakoScore++;
    }

    cout << taroScore << " " << hanakoScore << endl;
    
    return 0;
}