#include <bits/stdc++.h>

using namespace std;

int main() {
    string sequence;
    int caseNumber = 1;

    while (cin >> sequence) {
        if (sequence == "0") break;

        int queries;
        cin >> queries;

        cout << "Case " << caseNumber << ":" << endl;

        for (int i = 0; i < queries; i++) {
            int start, end;
            cin >> start >> end;

            if (start > end) swap(start, end);

            bool isSame = true;
            char firstChar = sequence[start];

            for (int j = start + 1; j <= end; j++) {
                if (sequence[j] != firstChar) {
                    isSame = false;
                    break;
                }
            }

            if (isSame) {
                cout << "Yes" << endl;
            } else cout << "No" << endl;
        }

        caseNumber++;
    }
    
    return 0;
}