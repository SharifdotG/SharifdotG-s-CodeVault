#include <bits/stdc++.h>

using namespace std;

int main() {
    int students;
    cin >> students;

    int student[students];
    double grade[students];

    for (int i = 0; i < students; i++) {
        cin >> student[i] >> grade[i];
    }

    double highestGrade = grade[0];
    int highestGradeStudent = student[0];

    for (int i = 1; i < students; i++) {
        if (grade[i] > highestGrade) {
            highestGrade = grade[i];
            highestGradeStudent = student[i];
        }
    }

    if (highestGrade >= 8) {
        cout << highestGradeStudent << endl;
    } else {
        cout << "Minimum note not reached" << endl;
    }

    return 0;
}
