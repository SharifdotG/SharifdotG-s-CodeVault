#include <bits/stdc++.h>

using namespace std;

int main() {
    int students;

    while (cin >> students, students != 0) {
        int scores[students];
        double sum = 0, mean, variance = 0, standardDeviation;

        for (int i = 0; i < students; i++) {
            cin >> scores[i];
            sum += scores[i];
        }

        mean = sum / students;

        for (int i = 0; i < students; i++) {
            variance += pow(scores[i] - mean, 2);
        }

        standardDeviation = sqrt(variance / students);

        cout << fixed << setprecision(8) << standardDeviation << endl;
    }
    
    return 0;
}