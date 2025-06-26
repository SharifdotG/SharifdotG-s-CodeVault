#include <bits/stdc++.h>

using namespace std;

int main() {
    int questions;
    cin >> questions;
    
    char correctAnswers[questions];
    for (int i = 0; i < questions; ++i) {
        cin >> correctAnswers[i];
    }
    
    int score = 0;
    for (int i = 0; i < questions - 1; ++i) {
        if (correctAnswers[i] == correctAnswers[i + 1]) {
            score++;
        }
    }
    
    cout << score << endl;
    
    return 0;
}
