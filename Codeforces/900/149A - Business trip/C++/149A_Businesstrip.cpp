#include <bits/stdc++.h>

using namespace std;

int main() {
    int growLimit;
    cin >> growLimit;

    vector<int> months(12);

    for (int i = 0; i < 12; i++) cin >> months[i];

    sort(months.begin(), months.end(), greater<int>());

    int numberOfMonths = 0, numberOfFruits = 0;

    while (numberOfFruits < growLimit && numberOfMonths < 12) {
        numberOfFruits += months[numberOfMonths];
        numberOfMonths++;
    }

    if (numberOfFruits < growLimit) cout << -1 << endl;
    else cout << numberOfMonths << endl;
    
    return 0;
}