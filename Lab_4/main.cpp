#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int side = 9;
    int square = side*side;
    int** arr;
    arr = new int*[side];
    for (int p = 0; p < side;){
        arr[p] = new int[side];
        p++;
    }
    int line = (side-1)/2;
    int column = (side-1)/2;
    int action = 0;
    int i = line;
    int j = column;
    int counter = 1;
    int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0;
    for (int value = 1; value < square+1;){
        arr[i][j] = value;
        value++;
        int remainder = action % 4;
        if (remainder == 0){
            j--;
            counter4 = 0;
            counter1++;
            if (counter1 == counter){
                action++;
            }
        }
        if (remainder == 1){
            i++;
            counter1 = 0;
            counter2++;
            if (counter2 == counter){
                action++;
                counter++;
            }
        }
        if (remainder == 2){
            j++;
            counter2 = 0;
            counter3++;
            if (counter3 == counter){
                action++;
            }
        }
        if (remainder == 3){
            i--;
            counter3 = 0;
            counter4++;
            if (counter4 == counter){
                action++;
                counter++;
            }
        }
    }
    for (int m = 0; m < side;){
        for (int n = 0; n < side;){
            cout << arr[m][n] << setw(8);
            n++;
        }
        cout << "\n";
        m++;
    }
}