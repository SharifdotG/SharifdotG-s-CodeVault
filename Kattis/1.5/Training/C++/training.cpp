#include <bits/stdc++.h>

using namespace std;

int main() {
    int problems, skill;
    cin >> problems >> skill;

    while (problems--) {
        int lowerSkill, upperSkill;
        cin >> lowerSkill >> upperSkill;

        if (skill >= lowerSkill && skill <= upperSkill) {
            skill++;
        }
    }

    cout << skill << endl;

    return 0;
}