#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfFriends, heightOfFence;
    cin >> numberOfFriends >> heightOfFence;

    int width = 0;
    
    while (numberOfFriends--) {
        int height;
        cin >> height;

        if (height > heightOfFence) width += 2;
        else width++;
    }

    cout << width;
    
    return 0;
}