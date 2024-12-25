#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, r, c;
    cin >> n >> r >> c;

    vector<string> a(n, string(n, '.'));
    r--, c--;

    int i = r - 1, j = c;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i--][j--] = '*';
    }

    i = r - 1; j = c;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i--][j++] = '*';
    }

    i = r; j = c + 1;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i--][j++] = '*';
    }

    i = r; j = c + 1;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i++][j++] = '*';
    }

    i = r + 1; j = c;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i++][j++] = '*';
    }
    
    i = r + 1; j = c;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i++][j--] = '*';
    }

    i = r; j = c - 1;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i++][j--] = '*';
    }
    
    i = r; j = c - 1;
    while ((0 <= i) && (i < n) && (0 <= j) && (j < n)) {
        a[i--][j--] = '*';
    }

    for (auto s : a) {
        cout << s << endl;
    }

    return 0;
}