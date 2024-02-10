#include <bits/stdc++.h>

using namespace std;

int main() {
    int testCases, requirements, proposals, requirementsMet, maxRequirementsMet;
    double price, minPrice;
    string proposalName, bestProposalName;

    for (int i = 1; cin >> requirements >> proposals; i++) {
        if (requirements == 0 && proposals == 0) break;

        if (i > 1) cout << endl;

        cin.ignore();

        for (int j = 0; j < requirements; j++) {
            string requirement;
            getline(cin, requirement);
        }

        maxRequirementsMet = 0;
        minPrice = 1000000000;

        for (int j = 0; j < proposals; j++) {
            getline(cin, proposalName);
            cin >> price >> requirementsMet;

            if (requirementsMet > maxRequirementsMet) {
                maxRequirementsMet = requirementsMet;
                minPrice = price;
                bestProposalName = proposalName;
            } else if (requirementsMet == maxRequirementsMet && price < minPrice) {
                minPrice = price;
                bestProposalName = proposalName;
            }

            cin.ignore();

            for (int k = 0; k < requirementsMet; k++) {
                string requirement;
                getline(cin, requirement);
            }
        }

        cout << "RFP #" << i << endl;
        cout << bestProposalName << endl;
    }
    
    return 0;
}