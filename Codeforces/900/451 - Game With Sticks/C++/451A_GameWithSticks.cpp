#include <bits/stdc++.h>

using namespace std;

int main() {
    int horizontalSticks, verticalSticks;
    cin >> horizontalSticks >> verticalSticks;

    int min = horizontalSticks < verticalSticks ? horizontalSticks : verticalSticks;

    if (min % 2 == 0) cout << "Malvika" << endl;
    else cout << "Akshat" << endl;
    
    return 0;
}