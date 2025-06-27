#include <bits/stdc++.h>

using namespace std;

int main() {
    int sum1, sum2;
    string name1, name2;

    while (getline(cin, name1)) {
        getline(cin, name2);

        sum1 = 0;
        for (int i = 0; i < name1.length(); i++) {
            if (name1[i] >= 'a' && name1[i] <= 'z') {
                sum1 += name1[i] - 'a' + 1;
            } else if (name1[i] >= 'A' && name1[i] <= 'Z') {
                sum1 += name1[i] - 'A' + 1;
            }
        }

        while (sum1 >= 10) {
            int temp = sum1;
            sum1 = 0;
            while (temp > 0) {
                sum1 += temp % 10;
                temp /= 10;
            }
        }

        sum2 = 0;
        for (int i = 0; i < name2.length(); i++) {
            if (name2[i] >= 'a' && name2[i] <= 'z') {
                sum2 += name2[i] - 'a' + 1;
            } else if (name2[i] >= 'A' && name2[i] <= 'Z') {
                sum2 += name2[i] - 'A' + 1;
            }
        }

        while (sum2 >= 10) {
            int temp = sum2;
            sum2 = 0;
            while (temp > 0) {
                sum2 += temp % 10;
                temp /= 10;
            }
        }

        if (sum1 > sum2) {
            printf("%.2f %%\n", (float) sum2 / sum1 * 100);
        } else {
            printf("%.2f %%\n", (float) sum1 / sum2 * 100);
        }
    }
    
    return 0;
}