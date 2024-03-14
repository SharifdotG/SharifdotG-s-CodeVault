#include <bits/stdc++.h>

using namespace std;

int main() {
    int participants, budget, hotels, weeks;

    while (cin >> participants >> budget >> hotels >> weeks) {
        int minCost = INT_MAX;

        for (int i = 0; i < hotels; i++) {
            int price;
            cin >> price;
            
            for (int j = 0; j < weeks; j++) {
                int availableBeds;
                cin >> availableBeds;
                
                if (availableBeds >= participants && price * participants <= budget) {
                    minCost = min(minCost, price * participants);
                }
            }
        }

        if (minCost == INT_MAX) {
            cout << "stay home" << endl;
        } else cout << minCost << endl;
    }
    
    return 0;
}