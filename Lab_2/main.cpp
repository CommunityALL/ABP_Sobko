#include <iostream>
#include <cmath>

using namespace std;

int main () {

    long n = 0;
    double curr;
    double sum = 0;
    int k = 1;
    const double eps = 0.000001;
    for ( n < 10; n++;){

        curr = k * ( n*n + 1 ) / ( n*n*n + 3 );
        if (fabs(curr) >= eps){
            cout << sum;
            break;
        }
        else {
            sum += curr;
            if (n=10){
                cout << sum;
            }
            else{

            }
            k = -1 * k;
            cout << k;
        }

    }

}