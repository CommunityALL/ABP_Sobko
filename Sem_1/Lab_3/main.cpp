#include <iostream>
#include <random>

using namespace std;

int main () {
    const int size = 200;
    int couples = 0;
    int arr[size];
    random_device rd;
    uniform_int_distribution <> distrib (-50, 50);
    mt19937 gen ( rd ( ) ) ;
    cout << "Input: \n";

    for (int i = 0; i < size;) {
        arr[i] = distrib(gen);
        cout << arr[i] << "; ";
        i++;
    }
    cout << "\n\nOutput: \n";

    for (int i = 0; i < size - 1;){
        int j = i+1;
            int product = arr[i]*arr[j];
            if (product < 0){
                couples++;
            }
        i++;
    }
    cout << couples;
    return 0;
}