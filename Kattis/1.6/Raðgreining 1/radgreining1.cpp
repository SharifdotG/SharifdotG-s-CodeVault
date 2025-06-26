#include <bits/stdc++.h>

using namespace std;

int main() {
    int dnaLength, sections;
    cin >> dnaLength >> sections;

    vector<char> dna(dnaLength, '?');

    bool conflict = false;

    for (int i = 0; i < sections; i++) {
        int start;
        string section;
        cin >> start >> section;

        start--;

        for (int j = 0; j < section.size(); j++) {
            if (dna[start + j] == '?' || dna[start + j] == section[j]) {
                dna[start + j] = section[j];
            } else {
                conflict = true;
                break;
            }
        }

        if (conflict) break;
    }

    if (conflict) {
        cout << "Villa" << endl;
    } else {
        for (char c : dna) {
            cout << c;
        }
        
        cout << endl;
    }
    
    return 0;
}