#include <bits/stdc++.h>

using namespace std;

int main() {
    double windSpeed;
    cin >> windSpeed;

    if (windSpeed >= 0 && windSpeed <= 0.2) cout << "Logn" << endl;
    else if (windSpeed >= 0.3 && windSpeed <= 1.5) cout << "Andvari" << endl;
    else if (windSpeed >= 1.6 && windSpeed <= 3.3) cout << "Kul" << endl;
    else if (windSpeed >= 3.4 && windSpeed <= 5.4) cout << "Gola" << endl;
    else if (windSpeed >= 5.5 && windSpeed <= 7.9) cout << "Stinningsgola" << endl;
    else if (windSpeed >= 8.0 && windSpeed <= 10.7) cout << "Kaldi" << endl;
    else if (windSpeed >= 10.8 && windSpeed <= 13.8) cout << "Stinningskaldi" << endl;
    else if (windSpeed >= 13.9 && windSpeed <= 17.1) cout << "Allhvass vindur" << endl;
    else if (windSpeed >= 17.2 && windSpeed <= 20.7) cout << "Hvassvidri" << endl;
    else if (windSpeed >= 20.8 && windSpeed <= 24.4) cout << "Stormur" << endl;
    else if (windSpeed >= 24.5 && windSpeed <= 28.4) cout << "Rok" << endl;
    else if (windSpeed >= 28.5 && windSpeed <= 32.6) cout << "Ofsavedur" << endl;
    else cout << "Farvidri" << endl;

    return 0;
}