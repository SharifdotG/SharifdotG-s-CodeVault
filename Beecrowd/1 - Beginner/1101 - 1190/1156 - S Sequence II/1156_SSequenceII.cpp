#include <bits/stdc++.h>

using namespace std;

int main() {
    double s = 1;

    for (int i = 3, j = 2; i <= 39; i += 2, j *= 2) {
        s += (double) i / j;
    }

    cout << fixed << setprecision(2) << s << endl;
    
    return 0;
}