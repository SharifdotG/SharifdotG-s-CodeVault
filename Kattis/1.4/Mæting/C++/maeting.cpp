#include <bits/stdc++.h>

using namespace std;

struct Student {
    string name;
    int attendance;
};

int main() {
    int n;
    cin >> n;

    vector<Student> students(n);
    unordered_map<string, int> attendanceMap;

    for (int i = 0; i < n; i++) {
        cin >> students[i].name;
        students[i].attendance = 0;
        attendanceMap[students[i].name] = i;
    }

    int classes;
    cin >> classes;

    for (int i = 0; i < classes; i++) {
        int studentsPresent;
        cin >> studentsPresent;

        for (int j = 0; j < studentsPresent; j++) {
            string studentName;
            cin >> studentName;

            students[attendanceMap[studentName]].attendance++;
        }
    }

    sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.attendance > b.attendance;
    });

    for (const auto& student : students) {
        cout << student.attendance << " " << student.name << endl;
    }

    return 0;
}