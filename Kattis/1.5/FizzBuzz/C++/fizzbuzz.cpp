#include <bits/stdc++.h>

using namespace std;

int main() {
    int X, Y, N;
    cin >> X >> Y >> N;

    for (int i = 1; i <= N; i++) {
        if (i % X == 0 && i % Y == 0) {
            cout << "FizzBuzz" << endl;
        } else if (i % X == 0) {
            cout << "Fizz" << endl;
        } else if (i % Y == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << i << endl;
        }
    }

    return 0;
}