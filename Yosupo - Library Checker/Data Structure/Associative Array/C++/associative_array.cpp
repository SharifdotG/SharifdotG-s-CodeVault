#include <bits/stdc++.h>

using namespace std;

int main() {
    int queries;
    cin >> queries;

    map<long long, long long> associativeArray;

    while (queries--) {
        int queryType;
        cin >> queryType;

        if (queryType == 0) {
            long long key, value;
            cin >> key >> value;

            associativeArray[key] = value;
        } else if (queryType == 1) {
            long long key;
            cin >> key;

            cout << associativeArray[key] << endl;
        }
    }
    
    return 0;
}