#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> array(n);
    int size[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        size[i] = array[i].size();
    }

    int max = *max_element(size, size + n);

    for (int i = 0; i < n; i++) {
        if (size[i] % 2 == 0) {
            if (size[i] > 3) {
                array[i].pop_back();
                size[i]--;
            } else {
                array[i].push_back('a');
                size[i]++;
            }
        }

        for (int j = 0; j < (max - size[i]) / 2; j++) {
            cout << " ";
        }

        cout << array[i] << endl;
    }
    
    return 0;
}