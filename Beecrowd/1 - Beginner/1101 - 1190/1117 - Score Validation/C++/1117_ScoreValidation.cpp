#include <bits/stdc++.h>

using namespace std;

int main() {
    double number, average = 0;
    int count = 0;

    while (count < 2) {
        cin >> number;

        if (number >= 0 && number <= 10) {
            average += number;
            count++;
        } else cout << "nota invalida" << endl;
    }

    cout << fixed << setprecision(2) << "media = " << average / 2 << endl;
    
    return 0;
}