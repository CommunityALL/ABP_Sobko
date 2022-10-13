#include <iostream>
#include <math.h>

using namespace std;

int main () {
    // Оголошення змінних x, y.
    float x, y;
    // Введення x, y.
    cout << "Enter x: \n";
    cin >> x;
    if (!x){
        cout << "Incorrect input\n";
    }
    else {
        cout << "Enter y: \n";
        cin >> y;
        if (!y) {
            cout << "Incorrect input\n";
        }
        else {
            // Перевірка умови задачі: |y|>=|x|, |y|<=1.

            if (fabs(y) >= fabs(x)) {
                fabs(y) <= 1 ? cout << "The point falls into the region.\n" : cout
                        << "The point does not fall into the region.\n";
            } else {
                cout << "The point does not fall into the region.\n";

            }
        }

    }

}