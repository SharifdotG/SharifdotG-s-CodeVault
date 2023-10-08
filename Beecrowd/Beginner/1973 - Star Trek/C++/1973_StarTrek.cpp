#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int stars;
    cin >> stars;

    vector<long long int> sheep(stars), star(stars);
    long long int starCount = 0, sheepcount = 0;

    for (long long int i = 0; i < stars; i++) {
        cin >> sheep[i];
    }

    for (long long int i = 0; i < stars; ) {
        if (sheep[i] % 2 == 1) {
            star[i] = 1;
            sheep[i]--;

            i++;
        } else if (sheep[i] % 2 == 0) {
            if (sheep[i] > 0) {
                star[i] = 1;
                sheep[i]--;
            }

            i--;
        }

        if (i < 0 || i >= stars) break;
    }

    for (long long int i = 0; i < stars; i++) {
        sheepcount += sheep[i];
        starCount += star[i];
    }

    cout << starCount << " " << sheepcount << endl;

    return 0;
}
