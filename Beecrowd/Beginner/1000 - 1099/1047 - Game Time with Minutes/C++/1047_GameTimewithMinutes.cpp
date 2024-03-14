#include <bits/stdc++.h>

using namespace std;

int main() {
    int startHour, startMinute, endHour, endMinute;
    cin >> startHour >> startMinute >> endHour >> endMinute;

    int durationMinute = endHour * 60 + endMinute - startHour * 60 - startMinute;

    if (durationMinute <= 0) durationMinute += 24 * 60;

    int durationHour = durationMinute / 60;
    durationMinute %= 60;

    cout << "O JOGO DUROU " << durationHour << " HORA(S) E " << durationMinute << " MINUTO(S)" << endl;
    
    return 0;
}