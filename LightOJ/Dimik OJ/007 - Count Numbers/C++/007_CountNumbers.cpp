#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        // count the total numbers in a string by counting the numbers in the string separted by one or multiple spaces
        string str;
        cin >> str;
        int flag = 0;

        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (((str[i] >= '0' && str[i] <= '9') || str[i] == '-') && flag == 0) {
                count++;
                flag = 1;
            } else if (!((str[i] >= '0' && str[i] <= '9') || str[i] == '-') && flag == 1) {
                flag = 0;
            }

            i++;
        }

        cout << count << endl;
    }
    
    return 0;
}