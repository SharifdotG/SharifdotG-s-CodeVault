#include <bits/stdc++.h>

using namespace std;

int main() {
    int numberOfFriends;
    cin >> numberOfFriends;
    cin.ignore();
    
    string names;
    getline(cin, names);
    
    stringstream ss(names);
    vector<string> friends;
    string name;
    
    while (ss >> name) {
        friends.push_back(name);
    }
    
    int index = 0;
    string mantra = "Úllen dúllen doff kikke lane koff koffe lane bikke bane úllen dúllen doff";
    stringstream ss_mantra(mantra);
    
    while (ss_mantra >> name) {
        index = (index + 1) % numberOfFriends;
        if (index == 0) {
            index = numberOfFriends;
        }
    }
    
    cout << friends[index - 1] << endl;

    return 0;
}