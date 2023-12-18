#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, total = 0, totalC = 0, totalR = 0, totalS = 0;
    cin >> number;

    while (number--) {
        int amount;
        char type;
        cin >> amount >> type;

        total += amount;

        if (type == 'C') totalC += amount;
        else if (type == 'R') totalR += amount;
        else if (type == 'S') totalS += amount;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalC << endl;
    cout << "Total de ratos: " << totalR << endl;
    cout << "Total de sapos: " << totalS << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double) totalC / total * 100 << " %" << endl;
    cout << "Percentual de ratos: " << (double) totalR / total * 100 << " %" << endl;
    cout << "Percentual de sapos: " << (double) totalS / total * 100 << " %" << endl;
    
    return 0;
}