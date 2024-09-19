#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfFroshs;
    cin >> numberOfFroshs;

    map<vector<int>, int> froshs;

    for (int i = 0; i < numberOfFroshs; i++) {
        vector<int> courses(5);

        for (int j = 0; j < 5; j++) {
            cin >> courses[j];
        }

        sort(courses.begin(), courses.end());

        froshs[courses]++;
    }

    int maxNumberOfFroshs = 0;

    for (auto frosh : froshs) {
        maxNumberOfFroshs = max(maxNumberOfFroshs, frosh.second);
    }

    int numberOfFroshsWithMaxNumberOfCourses = 0;

    for (auto frosh : froshs) {
        if (frosh.second == maxNumberOfFroshs) {
            numberOfFroshsWithMaxNumberOfCourses += frosh.second;
        }
    }

    cout << numberOfFroshsWithMaxNumberOfCourses << endl;

    return 0;
}
