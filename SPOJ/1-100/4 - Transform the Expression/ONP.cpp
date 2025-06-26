#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        string expression;
        cin >> expression;

        stack<char> operators;
        string result = "";

        for (int i = 0; i < expression.length(); i++) {
            if (expression[i] == '(') {
                continue;
            } else if (expression[i] == ')') {
                result += operators.top();
                operators.pop();
            } else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' ||
                       expression[i] == '/' || expression[i] == '^') {
                operators.push(expression[i]);
            } else result += expression[i];
        }

        cout << result << endl;
    }

    return 0;
}