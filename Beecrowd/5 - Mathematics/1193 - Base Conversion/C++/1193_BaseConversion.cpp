#include <bits/stdc++.h>

using namespace std;

int binaryToDecimal(const string &binaryStr) {
    return stoi(binaryStr, nullptr, 2);
}

int hexToDecimal(const string &hexStr) {
    return stoi(hexStr, nullptr, 16);
}

string decimalToBinary(int decimal) {
    return bitset<32>(decimal).to_string();
}

string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    string hexStr = ss.str();
    transform(hexStr.begin(), hexStr.end(), hexStr.begin(), ::tolower);
    return hexStr;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    for (int caseNum = 1; caseNum <= n; ++caseNum) {
        string inputLine;
        getline(cin, inputLine);

        stringstream ss(inputLine);
        string numberStr, baseType;
        ss >> numberStr >> baseType;

        int decimalValue;

        if (baseType == "bin") {
            decimalValue = binaryToDecimal(numberStr);
        } else if (baseType == "hex") {
            decimalValue = hexToDecimal(numberStr);
        } else if (baseType == "dec") {
            decimalValue = stoi(numberStr);
        } else {
            cerr << "Unknown base type" << endl;
            continue;
        }

        string decimalStr = to_string(decimalValue);
        string hexStr = decimalToHex(decimalValue);
        string binaryStr = decimalToBinary(decimalValue);

        binaryStr = binaryStr.substr(binaryStr.find('1'));

        cout << "Case " << caseNum << ":\n";
        if (baseType != "dec") cout << decimalStr << " dec\n";
        if (baseType != "hex") cout << hexStr << " hex\n";
        if (baseType != "bin") cout << binaryStr << " bin\n";
        cout << endl;
    }

    return 0;
}
