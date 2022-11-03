#include <iostream>
#include <iomanip>
#include <random>

using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: \n";
    cin >> size;
    int *arr = new int[size];
    random_device rd;
    uniform_int_distribution <> distrib (-50, 50);
    mt19937 gen ( rd ( ) ) ;
    cout << "Input: \n";
    for (int i = 0; i < size;) {
        arr[i] = distrib(gen);
        cout << arr[i] << setw(5);
        i++;
    }
    int areas = 0;
    for (int i = 0; i < size;){
        for(int j = 1; j < size - 1;){
            int area = arr[i];
            area += arr[j];
            if (area == 0){
                areas++;
            }
            j++;
        }
        i++;
    }
    cout << "\n\nThe number of continuous sections where the sum of the elements equals 0: \n" << areas;
    delete[]arr;
    return 0;
}