#include <bits/stdc++.h>

using namespace std;

int main() {
    string sequence, subsequence;
    int count = 0, pos = 0, i = 1;

    while (cin >> subsequence >> sequence) {
        while (pos != -1) {
            pos = sequence.find(subsequence, pos);

            if (pos != -1) {
                count++, pos++;
            }
        }

        cout << "Caso #" << i << ":" << endl;

        if (count == 0) {
            cout << "Nao existe subsequencia" << endl;
        } else {
            cout << "Qtd.Subsequencias: " << count << endl;
            cout << "Pos: " << sequence.rfind(subsequence) + 1 << endl;
        }
        
        cout << endl;

        count = 0, pos = 0;

        i++;
    }

    return 0;
}