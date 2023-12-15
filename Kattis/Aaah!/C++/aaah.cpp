#include <bits/stdc++.h>

using namespace std;

int main() {
    string jonAbleToSay, doctorWantsToHear;
    cin >> jonAbleToSay >> doctorWantsToHear;

    if (jonAbleToSay > doctorWantsToHear) {
        cout << "no" << endl;
    } else {
        cout << "go" << endl;
    }

    return 0;
}
