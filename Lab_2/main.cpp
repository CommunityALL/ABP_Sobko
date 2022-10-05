#include <iostream>
#include <cmath>


using namespace std;

int main () {
    cout << "Lab_2\nvar_4\n";

    double n = 1.0;
    double curr;
    double sum = 0.0;
    double k = 1.0;
    const double eps = 0.000001;
    curr = k * ( n*n + 1.0 ) / ( n*n*n + 3.0 );

    while (fabs(curr) >= eps){

        n = n + 1.0;
        curr = k * ( n*n + 1.0 ) / ( n*n*n + 3.0 );
        k=-k;
        sum = sum + curr;
        if(n == 9.0) {
            cout << "The sum of 10 members of the series: \n" << sum << "\n";
        }

    }
    cout << "The total sum of the series: \n" << sum << "\n";


    //return 0;
}