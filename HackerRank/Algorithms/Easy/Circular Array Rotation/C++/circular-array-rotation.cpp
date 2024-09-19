#include <bits/stdc++.h>

using namespace std;

int main() {
    int elements, rotations, queries;
    cin >> elements >> rotations >> queries;

    vector<int> array(elements);
    for (int i = 0; i < elements; i++) {
        cin >> array[i];
    }

    rotations %= elements;
    for (int i = 0; i < queries; i++) {
        int index;
        cin >> index;
        cout << array[(elements - rotations + index) % elements] << endl;
    }

    return 0;
}