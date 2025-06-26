#include <bits/stdc++.h>

using namespace std;

int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string gameProcess;
    cin >> gameProcess;

    int totalCalories = 0;
    
    for (int i = 0; i < gameProcess.length(); i++) {
        if (gameProcess[i] == '1') totalCalories += a1;
        else if (gameProcess[i] == '2') totalCalories += a2;
        else if (gameProcess[i] == '3') totalCalories += a3;
        else totalCalories += a4;
    }

    cout << totalCalories << endl;

    return 0;
}