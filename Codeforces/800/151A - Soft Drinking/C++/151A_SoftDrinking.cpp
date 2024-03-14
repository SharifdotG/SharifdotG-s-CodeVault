#include <bits/stdc++.h>

using namespace std;

int main() {
    int friends, bottles, bottleCanHold, limes, limeSlices, saltAmount, drinkForToast, saltForToast, drink, lime, salt;
    cin >> friends >> bottles >> bottleCanHold >> limes >> limeSlices >> saltAmount >> drinkForToast >> saltForToast;

    drink = (bottles * bottleCanHold) / drinkForToast;
    lime = limes * limeSlices;
    salt = saltAmount / saltForToast;
    
    cout << min(drink, min(lime, salt)) / friends;

    return 0;
}