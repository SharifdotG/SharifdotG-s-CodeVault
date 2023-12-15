#include <bits/stdc++.h>

using namespace std;

int main() {
    int trainingDays;
    cin >> trainingDays;

    int distances[trainingDays];
    for (int i = 0; i < trainingDays; i++) {
        cin >> distances[i];
    }

    int firstColleaugeDistances[trainingDays];
    for (int i = 0; i < trainingDays; i++) {
        cin >> firstColleaugeDistances[i];
    }

    int secondColleaugeDistances[trainingDays];
    for (int i = 0; i < trainingDays; i++) {
        cin >> secondColleaugeDistances[i];
    }

    int plan[trainingDays];
    for (int i = 0; i < trainingDays; i++) {
        int temp[3] = {distances[i], firstColleaugeDistances[i], secondColleaugeDistances[i]};
        sort(temp, temp + 3);
        plan[i] = temp[1];
    }

    for (int i = 0; i < trainingDays; i++) {
        cout << plan[i] << " ";
    }

    return 0;
}
