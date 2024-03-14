#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int healthPoints, dragonDamage, lightningBolts;
        cin >> healthPoints >> dragonDamage >> lightningBolts;

        while (healthPoints > 20 && dragonDamage > 0) {
            healthPoints = healthPoints / 2 + 10;
            dragonDamage--;
        }

        while (lightningBolts > 0) {
            healthPoints -= 10;
            lightningBolts--;
        }

        if (healthPoints <= 0) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    
    return 0;
}