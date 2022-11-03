#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int EnterSide1(int);
int EnterSide2(int);
int Square(int, int);
int** CreatingAnArray(int, int);
int** FillingAnArray(int, int, int**, int);
int** ArrayPrint(int**, int, int);

int main(){
    int height = 0;
    height = EnterSide1(height);
    int width = 0;
    width = EnterSide2(width);
    int square;
    square = Square(height, width);
    int **arr = CreatingAnArray(height, width);
    **arr = **FillingAnArray(height, width, arr, square);
    ArrayPrint(reinterpret_cast<int **>(arr), height, width);
    return 0;
}

int EnterSide1(int side){
    cout << "Enter height: \n";
    cin >> side;
    return side;
}
int EnterSide2(int side){
    cout << "Enter height: \n";
    cin >> side;
    return side;
}
int Square(int a, int b){
    int s = a*b;
    return s;
}
int** CreatingAnArray(int height, int width){
    int ** arr;
    arr = new int*[height];
    for (int p = 0; p < height;){
        arr[p] = new int[width];
        p++;
    }
    return arr;
}
int** FillingAnArray(int m , int n, int **arr, int s){
    int i = 0;
    int j = 0;
    int action = 0;
    int counter01 = m - 1, counter02 = n - 1;
    int counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0;
    for(int value = 1; value < s + 1;){
        arr[i][j] = value;
        value++;
        int pointer = action % 4;
        if (pointer == 0){
            i++;
            counter1++;
            counter4 = 0;
            if (counter1 == counter01){
                action++;
                if (action > 1){
                    counter01 -= 1;
                }
            }
        }
        if (pointer == 1){
            j++;
            counter2++;
            counter1 = 0;
            if (counter2 == counter02){
                action++;
                counter02 -= 1;
            }
        }
        if (pointer == 2){
            i--;
            counter3++;
            counter2 = 0;
            if (counter3 == counter01){
                action++;
                counter01 -= 1;
            }
        }
        if (pointer == 3){
            j--;
            counter4++;
            counter3 = 0;
            if (counter4 == counter02){
                action++;
                counter02 -= 1;
            }
        }
    }
    return arr;
}
int** ArrayPrint(int**arr, int m, int n){
    for (int i = 0; i < m;){
        for (int j = 0; j < n;){
            cout << arr[i][j] << setw(10);
            j++;
        }
        cout << "\n";
        i++;
    }
    return arr;
}