#include <bits/stdc++.h>

using namespace std;

int main() {
    int midterm, final, retake;
    
    while (cin >> midterm >> final >> retake) {
        if (midterm == -1 && final == -1 && retake == -1) {
            break;
        }
        
        if (midterm == -1 || final == -1) {
            cout << "F" << endl;
        } else if (midterm + final >= 80) {
            cout << "A" << endl;
        } else if (midterm + final >= 65) {
            cout << "B" << endl;
        } else if (midterm + final >= 50) {
            cout << "C" << endl;
        } else if (midterm + final >= 30) {
            if (retake >= 50) {
                cout << "C" << endl;
            } else cout << "D" << endl;
        } else cout << "F" << endl;
    }
    
    return 0;
}