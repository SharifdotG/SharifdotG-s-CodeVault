#include <bits/stdc++.h>

using namespace std;

struct Student {
    string name;
    double cgpa;
};

bool compareGPA(const Student &a, const Student &b) {
    if (a.cgpa != b.cgpa) return a.cgpa > b.cgpa;
    return a.name < b.name;
}

int main() {
    int students;
    cin >> students;

    Student student[students];

    for (int i = 0; i < students; i++) {
        cin >> student[i].name >> student[i].cgpa;
    }

    sort(student, student + students, compareGPA);

    int meritPosition[students];
    meritPosition[0] = 1;

    cout << "1." << student[0].name << endl;

    for (int i = 1; i < students; i++) {
        if (student[i].cgpa != student[i - 1].cgpa) {
            meritPosition[i] = i + 1;
            cout << i + 1 << "." << student[i].name << endl;
        } else {
            cout << meritPosition[i - 1] << "." << student[i].name << endl;
        }
    }
    
    return 0;
}