#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    char operation;
    
    while (true) {
        cin >> a >> operation >> b;
        
        switch (operation) {
            case '+':
                cout << a + b << endl;
                break;
            case '-':
                cout << a - b << endl;
                break;
            case '*':
                cout << a * b << endl;
                break;
            case '/':
                cout << a / b << endl;
                break;
            case '?':
                return 0;
        }
    }
    
    return 0;
}