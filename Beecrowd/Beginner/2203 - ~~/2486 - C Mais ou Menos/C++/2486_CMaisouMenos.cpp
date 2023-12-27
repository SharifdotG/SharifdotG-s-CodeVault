#include <bits/stdc++.h>

using namespace std;

int main() {
    int food;
    while (cin >> food && food != 0) {
        int total = 0;

        while (food--) {
            int amount;
            string name;

            cin >> amount;
            getline(cin, name);

            if (name == " suco de laranja")
                total += amount * 120;
            else if (name == " morango fresco")
                total += amount * 85;
            else if (name == " mamao")
                total += amount * 85;
            else if (name == " goiaba vermelha")
                total += amount * 70;
            else if (name == " manga")
                total += amount * 56;
            else if (name == " laranja")
                total += amount * 50;
            else if (name == " brocolis")
                total += amount * 34;
        }

        if (total < 110) {
            cout << "Mais " << 110 - total << " mg" << endl;
        } else if (total > 130) {
            cout << "Menos " << total - 130 << " mg" << endl;
        } else cout << total << " mg" << endl;
    }

    return 0;
}