#include <bits/stdc++.h>

using namespace std;

int main() {
    int bonesPeoples, bloodPeoples;
    cin >> bonesPeoples >> bloodPeoples;

    int bonesTreats, bloodTreats;
    cin >> bonesTreats >> bloodTreats;

    cout << bonesPeoples * bonesTreats + bloodPeoples * bloodTreats << endl;
    
    return 0;
}