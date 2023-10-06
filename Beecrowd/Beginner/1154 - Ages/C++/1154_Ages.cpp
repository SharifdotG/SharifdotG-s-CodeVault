#include <bits/stdc++.h>

using namespace std;

int main() {
    int age, sum = 0, count = 0;

    while (cin >> age && age >= 0) {
        sum += age;
        count++;
    }

    cout << fixed << setprecision(2) << (double) sum / count << endl;
    
    return 0;
}