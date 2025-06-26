#include <bits/stdc++.h>

using namespace std;

int main() {
    int number;
    cin >> number;

    int array[1000];

    for (int i = 0; i < 1000; i++) {
        array[i] = i % number;
    }

    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " << array[i] << endl;
    }
    
    return 0;
}