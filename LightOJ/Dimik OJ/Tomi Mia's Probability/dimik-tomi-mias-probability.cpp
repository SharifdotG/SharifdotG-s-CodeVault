#include <bits/stdc++.h>

using namespace std;

long long factorial(long long number) {
    if (number == 0) {
        return 1;
    } else {
        return number * factorial(number - 1);
    }
}

int main() {
    int testCases;
    cin >> testCases;
    cin.ignore();
    
    while (testCases--) {
        string sentence;
        getline(cin, sentence);

        istringstream iss(sentence);
        vector<string> words;
        string word;

        while (iss >> word) {
            words.push_back(word);
        }

        unsigned long long permutations = factorial(words.size());

        map<string, int> wordFrequency;

        for (int i = 0; i < words.size(); i++) {
            wordFrequency[words[i]]++;
        }

        unsigned long long denominator = 1;

        for (const auto& word : wordFrequency) {
            denominator *= factorial(word.second);
        }

        unsigned long long probability = permutations / denominator;

        cout << "1/" << probability << endl;
    }
    
    return 0;
}