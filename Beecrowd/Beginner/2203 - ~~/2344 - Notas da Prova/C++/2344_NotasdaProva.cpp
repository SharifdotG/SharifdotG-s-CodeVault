#include <bits/stdc++.h>

using namespace std;

int main() {
    int grade;
    cin >> grade;

    if (grade == 0)
        cout << "E" << endl;
    else if (grade >= 1 && grade <= 35)
        cout << "D" << endl;
    else if (grade >= 36 && grade <= 60)
        cout << "C" << endl;
    else if (grade >= 61 && grade <= 85)
        cout << "B" << endl;
    else if (grade >= 86 && grade <= 100)
        cout << "A" << endl;

    return 0;
}