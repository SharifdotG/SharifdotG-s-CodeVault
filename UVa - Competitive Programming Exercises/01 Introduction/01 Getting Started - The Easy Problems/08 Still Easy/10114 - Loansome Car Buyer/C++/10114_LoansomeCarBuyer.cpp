#include <bits/stdc++.h>

using namespace std;

int main() {
    int months, records;
    double downPayment, loan;

    while (cin >> months >> downPayment >> loan >> records) {
        if (months < 0) break;

        double carValue = loan + downPayment;
        double monthlyPayment = loan / months;

        int month;
        double depreciation, depreciationRecords[months + 1];

        for (int i = 0; i < months + 1; i++) {
            depreciationRecords[i] = -1;
        }

        for (int i = 0; i < records; i++) {
            cin >> month >> depreciation;
            depreciationRecords[month] = depreciation;
        }

        for (int i = 0; i < months + 1; i++) {
            if (depreciationRecords[i] == -1) {
                depreciationRecords[i] = depreciationRecords[i - 1];
            }
        }

        int monthCount = 0;
        double monthlyDepreciation = depreciationRecords[0];

        carValue = carValue - (carValue * monthlyDepreciation);

        while (loan > carValue) {
            monthCount++;
            monthlyDepreciation = depreciationRecords[monthCount];
            carValue = carValue - (carValue * monthlyDepreciation);
            loan = loan - monthlyPayment;
        }

        if (monthCount == 1) {
            cout << monthCount << " month" << endl;
        } else {
            cout << monthCount << " months" << endl;
        }
    }
    
    return 0;
}