#include <bits/stdc++.h>

using namespace std;

int main() {
    string time;
    cin >> time;

    if (time[8] == 'A') {
        if (time[0] == '1' && time[1] == '2') {
            time[0] = '0';
            time[1] = '0';
        }
    } else {
        if (time[0] != '1' || time[1] != '2') {
            time[0] += 1;
            time[1] += 2;
        }
    }

    time.erase(8, 2);
    
    cout << time << endl;
    
    return 0;
}