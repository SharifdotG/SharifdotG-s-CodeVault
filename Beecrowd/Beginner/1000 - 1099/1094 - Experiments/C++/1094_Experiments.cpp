#include <bits/stdc++.h>

using namespace std;

int main() {
    int number, total = 0, totalCoelho = 0, totalRato = 0, totalSapo = 0;
    cin >> number;

    while (number--) {
        int amount;
        char type;
        cin >> amount >> type;

        total += amount;

        if (type == 'C') totalCoelho += amount;
        else if (type == 'R') totalRato += amount;
        else if (type == 'S') totalSapo += amount;
    }

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelho << endl;
    cout << "Total de ratos: " << totalRato << endl;
    cout << "Total de sapos: " << totalSapo << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << (double) totalCoelho / total * 100 << " %" << endl;
    cout << "Percentual de ratos: " << (double) totalRato / total * 100 << " %" << endl;
    cout << "Percentual de sapos: " << (double) totalSapo / total * 100 << " %" << endl;
    
    return 0;
}