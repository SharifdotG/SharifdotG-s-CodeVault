#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int array[3] = {a, b, c};
    sort(array, array + 3);

    cout << array[0] << " " << array[1] << " " << array[2] << endl;
    
    return 0;
}