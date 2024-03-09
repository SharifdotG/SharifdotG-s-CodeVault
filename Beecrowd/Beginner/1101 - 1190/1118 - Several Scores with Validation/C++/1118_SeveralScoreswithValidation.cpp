#include <bits/stdc++.h>

using namespace std;

int main() {
    double number, average, sum = 0;
    int count = 0;

    while (count < 2) {
        cin >> number;

        if (number >= 0 && number <= 10) {
            sum += number;
            count++;
        } else cout << "nota invalida" << endl;
    }

    average = sum / 2;

    cout << fixed << setprecision(2) << "media = " << average << endl;

    while (true) {
        cout << "novo calculo (1-sim 2-nao)" << endl;

        int option;
        cin >> option;

        if (option == 1) {
            sum = 0;
            count = 0;

            while (count < 2) {
                cin >> number;

                if (number >= 0 && number <= 10) {
                    sum += number;
                    count++;
                } else cout << "nota invalida" << endl;
            }

            average = sum / 2;

            cout << fixed << setprecision(2) << "media = " << average << endl;
        } else if (option == 2) break;
    }
    
    return 0;
}