#include <bits/stdc++.h>

using namespace std;

int main() {
    int totalTime;
    cin >> totalTime;

    int hours = totalTime / 3600;
    int minutes = (totalTime % 3600) / 60;
    int seconds = (totalTime % 3600) % 60;

    cout << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}