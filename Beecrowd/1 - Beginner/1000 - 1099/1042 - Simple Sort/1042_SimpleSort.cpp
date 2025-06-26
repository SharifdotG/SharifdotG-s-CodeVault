#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int numbers[3] = {a, b, c};
    
    sort(numbers, numbers + 3);

    cout << numbers[0] << endl;
    cout << numbers[1] << endl;
    cout << numbers[2] << endl;

    cout << endl;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    
    return 0;
}