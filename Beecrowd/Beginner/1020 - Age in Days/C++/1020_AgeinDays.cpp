#include <bits/stdc++.h>

using namespace std;

int main() {
    int timeInSeconds;
    cin >> timeInSeconds;

    int hours = timeInSeconds / 3600;
    int minutes = (timeInSeconds % 3600) / 60;
    int seconds = (timeInSeconds % 3600) % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}