#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, cpul, meml;
    cin >> n >> cpul >> meml;

    vector<string> verdict;

    for (int i = 0; i < n; i++) {
        int d, cpu, memory;
        cin >> d >> cpu >> memory;

        if (cpu > cpul) {
            verdict.push_back("CLE");
        } else if (memory > meml) {
            verdict.push_back("MLE");
        } else if (d > 0) {
            verdict.push_back("WA");
        }
    }

    if (verdict.size() == 0) {
        cout << "AC" << endl;
    } else {
        cout << verdict[0] << endl;
    }

    return 0;
}