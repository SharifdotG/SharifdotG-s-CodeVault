#include <bits/stdc++.h>

using namespace std;

int main() {
    int regions;
    while (cin >> regions && regions) {
        int randomNumber = 1;

        while (true) {
            vector<int> v(regions);

            iota(v.begin(), v.end(), 1);

            int i = 0;
            while (v.size() > 1) {
                v.erase(v.begin() + i);
                i = (i + randomNumber - 1) % v.size();
            }

            if (v[0] == 13) {
                cout << randomNumber << endl;
                break;
            }

            randomNumber++;
        }
    }
    
    return 0;
}