#include <bits/stdc++.h>

using namespace std;

int digitSum(int n) {
    int sum = 0;
    n = abs(n);
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int queries;
    cin >> queries;

    unordered_map<int, int> database;
    unordered_map<int, int> digitSumCount;
    int totalCount = 0;

    while (queries--) {
        string query;
        cin >> query;

        if (query == "A") {
            int N;
            cin >> N;
            int sum = digitSum(N);

            database[N]++;
            digitSumCount[sum]++;
            totalCount++;

            cout << totalCount << endl;
        } else if (query == "D") {
            int N;
            cin >> N;

            if (database[N] > 0) {
                int sum = digitSum(N);

                database[N]--;
                digitSumCount[sum]--;
                totalCount--;

                if (database[N] == 0) {
                    database.erase(N);
                }
            }

            cout << totalCount << endl;
        } else if (query == "S") {
            int X;
            cin >> X;
            
            cout << digitSumCount[X] << endl;
        }
    }

    return 0;
}