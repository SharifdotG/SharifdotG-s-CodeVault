#include <bits/stdc++.h>

using namespace std;

int main() {
    double pointX, pointY;
    cin >> pointX >> pointY;

    if (pointX == 0 && pointY == 0) cout << "Origem" << endl;
    else if (pointX == 0) cout << "Eixo Y" << endl;
    else if (pointY == 0) cout << "Eixo X" << endl;
    else if (pointX > 0 && pointY > 0) cout << "Q1" << endl;
    else if (pointX < 0 && pointY > 0) cout << "Q2" << endl;
    else if (pointX < 0 && pointY < 0) cout << "Q3" << endl;
    else cout << "Q4" << endl;
    
    return 0;
}