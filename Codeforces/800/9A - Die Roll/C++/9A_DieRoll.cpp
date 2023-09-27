#include <bits/stdc++.h>

using namespace std;

int main() {
    int yakkoPoints, wakkoPoints;
    cin >> yakkoPoints >> wakkoPoints;

    int maxPoints = yakkoPoints > wakkoPoints ? yakkoPoints : wakkoPoints;

    int numerator = 6 - maxPoints + 1;

    if (numerator == 1) cout << "1/6" << endl;
    else if (numerator == 2) cout << "1/3" << endl;
    else if (numerator == 3) cout << "1/2" << endl;
    else if (numerator == 4) cout << "2/3" << endl;
    else if (numerator == 5) cout << "5/6" << endl;
    else cout << "1/1" << endl;

    return 0;
}