#include <bits/stdc++.h>

using namespace std;

int main() {
    int courses;

    while (cin >> courses && courses) {
        int categories;
        cin >> categories;

        vector<int> coursesTaken(courses);

        for (int i = 0; i < courses; i++) {
            cin >> coursesTaken[i];
        }

        bool meetsRequirements = true;

        for (int i = 0; i < categories; i++) {
            int courseInCategory, coursesMustTake;
            cin >> courseInCategory >> coursesMustTake;

            int auxiliaryCourses = 0;

            for (int j = 0; j < courseInCategory; j++) {
                cin >> auxiliaryCourses;

                if (find(coursesTaken.begin(), coursesTaken.end(), auxiliaryCourses) != coursesTaken.end()) {
                    coursesMustTake--;
                }
            }

            if (coursesMustTake > 0) {
                meetsRequirements = false;
            }
        }

        if (meetsRequirements) {
            cout << "yes" << endl;
        } else cout << "no" << endl;
    }
    
    return 0;
}