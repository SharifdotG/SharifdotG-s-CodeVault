#include <bits/stdc++.h>

using namespace std;

int main() {
    int faces[6];
    for (int i = 0; i < 6; i++) {
        cin >> faces[i];
    }

    string command;
    cin >> command;

    for (int i = 0; i < command.length(); i++) {
        switch (command[i]) {
            case 'N':
                swap(faces[0], faces[1]);
                swap(faces[1], faces[5]);
                swap(faces[5], faces[4]);
                break;
            case 'S':
                swap(faces[0], faces[4]);
                swap(faces[4], faces[5]);
                swap(faces[5], faces[1]);
                break;
            case 'E':
                swap(faces[0], faces[3]);
                swap(faces[3], faces[5]);
                swap(faces[5], faces[2]);
                break;
            case 'W':
                swap(faces[0], faces[2]);
                swap(faces[2], faces[5]);
                swap(faces[5], faces[3]);
                break;
        }
    }

    cout << faces[0] << endl;
    
    return 0;
}