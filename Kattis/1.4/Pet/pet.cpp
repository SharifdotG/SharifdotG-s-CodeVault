#include <bits/stdc++.h>

using namespace std;

int main() {
    int max = 0, winner;

    for (int i = 0; i < 5; i++) {
        int gradeA, gradeB, gradeC, gradeD;
        cin >> gradeA >> gradeB >> gradeC >> gradeD;

        int sum = gradeA + gradeB + gradeC + gradeD;

        if (sum > max) {
            max = sum;
            winner = i + 1;
        }
    }

    cout << winner << " " << max << endl;

    return 0;
}