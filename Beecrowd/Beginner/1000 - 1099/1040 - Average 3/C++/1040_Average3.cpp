#include <bits/stdc++.h>

using namespace std;

int main() {
    double grade1, grade2, grade3, grade4;
    cin >> grade1 >> grade2 >> grade3 >> grade4;

    double average = (grade1 * 2 + grade2 * 3 + grade3 * 4 + grade4) / 10;

    cout << "Media: " << fixed << setprecision(1) << average << endl;

    if (average >= 7.0) cout << "Aluno aprovado." << endl;
    else if (average < 5.0) cout << "Aluno reprovado." << endl;
    else {
        cout << "Aluno em exame." << endl;

        double exam;
        cin >> exam;

        cout << "Nota do exame: " << fixed << setprecision(1) << exam << endl;

        average = (average + exam) / 2;

        if (average >= 5.0) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        
        cout << "Media final: " << fixed << setprecision(1) << average << endl;
    }
    
    return 0;
}