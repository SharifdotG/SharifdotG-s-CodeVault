#include <bits/stdc++.h>

using namespace std;

int main() {
    string word, text;
    int count = 0;

    cin >> word;

    while (cin >> text) {
        if (text == "END_OF_TEXT") break;

        transform(text.begin(), text.end(), text.begin(), ::tolower);
        
        if (text == word) count++;
    }

    cout << count << endl;
    
    return 0;
}