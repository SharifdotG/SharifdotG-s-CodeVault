#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string ipAddress;
        cin >> ipAddress;

        int firstOctet = stoi(ipAddress.substr(0, ipAddress.find('.')));

        if (firstOctet >= 0 && firstOctet <= 127) {
            cout << "A" << endl;
        } else if (firstOctet >= 128 && firstOctet <= 191) {
            cout << "B" << endl;
        } else if (firstOctet >= 192 && firstOctet <= 223) {
            cout << "C" << endl;
        } else if (firstOctet >= 224 && firstOctet <= 239) {
            cout << "D" << endl;
        } else if (firstOctet >= 240 && firstOctet <= 255) {
            cout << "E" << endl;
        } else cout << "0" << endl;
    }
    
    return 0;
}