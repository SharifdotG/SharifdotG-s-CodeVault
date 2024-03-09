#include <bits/stdc++.h>

using namespace std;

int main() {
    int students, puzzles;
    cin >> students >> puzzles;

    int pieces[puzzles];

    for (int i = 0; i < puzzles; i++) cin >> pieces[i];

    sort(pieces, pieces + puzzles);

    int min = pieces[students - 1] - pieces[0];

    for (int i = 1; i <= puzzles - students; i++) {
        if (pieces[i + students - 1] - pieces[i] < min) {
            min = pieces[i + students - 1] - pieces[i];
        }
    }

    cout << min << endl;
    
    return 0;
}