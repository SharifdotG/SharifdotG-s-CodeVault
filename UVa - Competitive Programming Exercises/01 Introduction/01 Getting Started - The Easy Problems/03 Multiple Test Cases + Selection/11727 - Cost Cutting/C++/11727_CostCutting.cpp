#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, firstEmployee, secondEmployee, thirdEmployee;

    cin >> testCases;

    for (int i = 1; i <= testCases; i++) {
        cin >> firstEmployee >> secondEmployee >> thirdEmployee;

        if ((firstEmployee > secondEmployee && firstEmployee < thirdEmployee) || (firstEmployee > thirdEmployee && firstEmployee < secondEmployee)) {
            cout << "Case " << i << ": " << firstEmployee << endl;
        } else if ((secondEmployee > firstEmployee && secondEmployee < thirdEmployee) || (secondEmployee > thirdEmployee && secondEmployee < firstEmployee)) {
            cout << "Case " << i << ": " << secondEmployee << endl;
        } else {
            cout << "Case " << i << ": " << thirdEmployee << endl;
        }
    }
    
    return 0;
}