#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c;
    float discriminant, root1, root2, real_part, imaginary_part;

    cout << "Enter the value of a, b, c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        cout << "The roots are: " << root1 << " and " << root2 << endl;
    } else {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        cout << "The roots are: " << real_part << " + " << imaginary_part << "i and " << real_part << " - " << imaginary_part << "i" << endl;
    }

    return 0;
}