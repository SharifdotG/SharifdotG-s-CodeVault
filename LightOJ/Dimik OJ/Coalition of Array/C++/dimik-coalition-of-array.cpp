#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n1;
        cin >> n1;
        
        vector<int> v1;
        for (int i = 0; i < n1; i++) {
            int x;
            cin >> x;
            v1.push_back(x);
        }

        int n2;
        cin >> n2;

        vector<int> v2;
        for (int i = 0; i < n2; i++) {
            int x;
            cin >> x;
            v2.push_back(x);
        }

        vector<int> v3;
        for (int i = 0; i < n1; i++) {
            v3.push_back(v1[i]);
        }
        for (int i = 0; i < n2; i++) {
            v3.push_back(v2[i]);
        }

        sort(v3.begin(), v3.end());

        for (int i = 0; i < v3.size(); i++) {
            cout << v3[i] << " ";
        }

        cout << endl;
    }

    return 0;
}