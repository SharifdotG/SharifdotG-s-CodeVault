#include <bits/stdc++.h>

using namespace std;

int main() {
    string tweet;
    getline(cin, tweet);

    if (tweet.length() <= 140) cout << "TWEET" << endl;
    else cout << "MUTE" << endl;

    return 0;
}