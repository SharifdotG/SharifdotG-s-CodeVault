#include <bits/stdc++.h>

using namespace std;

int main() {
    int hours, minutes;
    cin >> hours >> minutes;

    minutes -= 45;
    
    if (minutes < 0) {
        minutes += 60;
        hours--;
    }

    if (hours < 0) hours += 24;

    cout << hours << " " << minutes << endl;

    return 0;
}