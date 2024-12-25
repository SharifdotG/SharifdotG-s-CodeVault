#include <bits/stdc++.h>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    vector<string> words;
    stringstream ss(text);
    string word;
    
    while (getline(ss, word, ' ')) {
        if (word.back() == '.' || word.back() == ',' || word.back() == ';') {
            words.push_back(word.substr(0, word.length() - 1));
        } else {
            words.push_back(word);
        }
    }

    string longestWord = "";
    string shortestWord = words[0];
    map<string, int> wordCounts;
    map<string, string> firstOccurrences;

    for (const string& w : words) {
        string lowerW = w;
        transform(lowerW.begin(), lowerW.end(), lowerW.begin(), ::tolower);

        if (w.length() > longestWord.length()) {
            longestWord = w;
        }
        if (w.length() < shortestWord.length()) {
            shortestWord = w;
        }

        if (firstOccurrences.find(lowerW) == firstOccurrences.end()) {
            firstOccurrences[lowerW] = w;
        }
        wordCounts[lowerW]++;
    }

    string mostRepeatedWord = "";
    int maxCount = 0;
    for (const auto& pair : wordCounts) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostRepeatedWord = firstOccurrences[pair.first];
        }
    }

    cout << longestWord << endl;
    cout << shortestWord << endl;
    cout << mostRepeatedWord << endl;

    return 0;
}