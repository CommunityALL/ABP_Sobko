#include <iostream>
#include <cmath>


using namespace std;

int main () {

    cout << "Lab_2\nvar_4\n";

    double n = 0.0;
    double curr;
    double sum = 0.0;
    double k = 1.0;
    const double eps = 0.000001;
    curr = k * ( n*n + 1.0 ) / ( n*n*n + 3.0 );
    sum = sum + curr;

    while (fabs(curr) >= eps){

        n = n + 1.0;
        curr = k * ( n*n + 1.0 ) / ( n*n*n + 3.0 );
        k=-k;
        sum = sum + curr;
        if(n == 9.0) {
            cout << "The sum of 10 members of the series (starting from 0): \n" << sum << "\n";
        }
//        if (n == 10.0) {
//            cout << "The sum of 11 members of the series: \n" << sum << "\n";
//            cout << "11 member series: \n" << curr << "\n";
//        }

    }
    cout << "The total sum of the series: \n" << sum << "\n";

}