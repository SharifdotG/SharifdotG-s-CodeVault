#include <bits/stdc++.h>

using namespace std;

int main() {
    int alcohol = 0, gasoline = 0, diesel = 0;

    while (true) {
        int code;
        cin >> code;

        if (code == 1) alcohol++;
        else if (code == 2) gasoline++;
        else if (code == 3) diesel++;
        else if (code == 4) break;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;
    
    return 0;
}