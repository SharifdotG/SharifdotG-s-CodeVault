#include <bits/stdc++.h>

using namespace std;

int main() {
    int day1, hour1, minute1, second1;
    int day2, hour2, minute2, second2;
    int day, hour, minute, second;
    string word;

    cin >> word >> day1;
    cin >> hour1 >> word >> minute1 >> word >> second1;
    cin >> word >> day2;
    cin >> hour2 >> word >> minute2 >> word >> second2;

    second = second2 - second1;
    minute = minute2 - minute1;
    hour = hour2 - hour1;
    day = day2 - day1;

    if (second < 0) {
        second += 60;
        minute--;
    }

    if (minute < 0) {
        minute += 60;
        hour--;
    }

    if (hour < 0) {
        hour += 24;
        day--;
    }

    cout << day << " dia(s)" << endl;
    cout << hour << " hora(s)" << endl;
    cout << minute << " minuto(s)" << endl;
    cout << second << " segundo(s)" << endl;
    
    return 0;
}