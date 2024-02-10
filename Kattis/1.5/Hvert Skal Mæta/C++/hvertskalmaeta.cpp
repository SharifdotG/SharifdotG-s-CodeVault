#include <bits/stdc++.h>

using namespace std;

int main() {
    string manicipality;
    cin >> manicipality;

    if (manicipality == "Akureyri" ||
        manicipality == "Fjardabyggd" ||
        manicipality == "Mulathing") cout << "Akureyri";
    else cout << "Reykjavik";

    return 0;
}