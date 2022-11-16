// ПП-11
// Собко Вікторія
// Варіант 4

#include <iostream>
#include <random>

int numberOne();
int numberTwo();

using namespace std;

int main(){
    while (true) {
        cout << "\n\n1 - task number 1\n2 - task number 2\n";
        cout << "Enter task number: \n";
        int number;
        cin >> number;
        if (number == 1) {
            numberOne();
        }
        if (number == 2) {
            numberTwo();
        }
        if (!number) {
            cout << "Incorrect input.\n";
        }
    }
}

int numberOne(){
    cout << "Enter the dimension of the first array: \n";
    int size1;
    cin >> size1;
    if(size1 < 1 || size1 > 10){
        cout << "Incorrect input.\n";
        exit(0);
    }
    int arr1[size1];
    cout << "1 - filling the array from the console manually\n";
    cout << "2 - filling the array with random numbers from 1 to 100\n";
    cout << "Enter a way to fill the first array: \n";
    int way1;
    cin >> way1;
    if (way1 == 1) {
        for (int i = 0; i < size1;){
            cout << "Enter " << i+1 << " array element: \n";
            cin >> arr1[i];
            i++;
        }
        cout << "Input: \n";
        for (int i = 0; i < size1;) {
            cout << arr1[i] << "; ";
            i++;
        }
    }
    if (way1 == 2) {
        random_device rd;
        uniform_int_distribution <> distrib (1, 100);
        mt19937 gen ( rd ( ) ) ;
        cout << "Input: \n";
        for (int i = 0; i < size1;) {
            arr1[i] = distrib(gen);
            cout << arr1[i] << "; ";
            i++;
        }
    }
    if (!way1) {
        cout << "Incorrect input.\n";
    }

    cout << "\nEnter the dimension of the second array: \n";
    int size2;
    cin >> size2;
    if(size2 < 1 || size2 > 10){
        cout << "Incorrect input.\n";
        exit(0);
    }
    int arr2[size2];
    cout << "1 - filling the array from the console manually\n";
    cout << "2 - filling the array with random numbers from 1 to 100\n";
    cout << "Enter a way to fill the second array: \n";
    int way2;
    cin >> way2;
    if (way2 == 1) {
        for (int i = 0; i < size2;){
            cout << "Enter " << i+1 << " array element: \n";
            cin >> arr2[i];
            i++;
        }
        cout << "Input: \n";
        for (int i = 0; i < size2;) {
            cout << arr2[i] << "; ";
            i++;
        }
    }
    if (way2 == 2) {
        random_device rd;
        uniform_int_distribution <> distrib (1, 100);
        mt19937 gen ( rd ( ) ) ;
        cout << "Input: \n";
        for (int i = 0; i < size1;) {
            arr2[i] = distrib(gen);
            cout << arr2[i] << "; ";
            i++;
        }
    }
    if (!way2) {
        cout << "Incorrect input.\n";
    }

    cout << "\nOutput: \n";

    for (int i = 0; i < size1;){
        for (int j = 0; j < size2;){
            if (arr2[0] >= arr1[size1]){
                if (arr1[i] <= arr2[0] && arr1[i] >= arr1[size1]){
                    int counter1  = 0;
                    for(int m = 0; m < size1;){
                        if (arr1[i] % arr1[m] == 0){
                            counter1++;
                        }
                        m++;
                    }
                    int counter2  = 0;
                    for(int m = 0; m < size2;){
                        if (arr2[m] % arr1[i] == 0){
                            counter2++;
                        }
                        m++;
                    }
                    if (counter1 == size1-1 && counter2 == size2-1){
                        cout << arr1[i] << "  ";
                    }
                }
            }
            if (arr2[0] < arr1[size1]){
                if (arr1[i] >= arr2[0] && arr1[i] <= arr1[size1]){
                    int counter1  = 0;
                    for(int m = 0; m < size1;){
                        if (arr1[i] % arr1[m] == 0){
                            counter1++;
                        }
                        m++;
                    }
                    int counter2  = 0;
                    for(int m = 0; m < size2;){
                        if (arr2[m] % arr1[i] == 0){
                            counter2++;
                        }
                        m++;
                    }
                    if (counter1 == size1-1 && counter2 == size2-1){
                        cout << arr1[i] << "  ";
                    }
                }
            }

            if (arr2[0] >= arr1[size1]){
                if (arr2[j] <= arr1[0] && arr2[j] >= arr1[size1]){
                    int counter1  = 0;
                    for(int m = 0; m < size1;){
                        if (arr2[j] % arr1[m] == 0){
                            counter1++;
                        }
                        m++;
                    }
                    int counter2  = 0;
                    for(int m = 0; m < size2;){
                        if (arr2[m] % arr2[j] == 0){
                            counter2++;
                        }
                        m++;
                    }
                    if (counter1 == size1-1 && counter2 == size2-1){
                        cout << arr2[j] << "  ";
                    }
                }
            }
            if (arr2[0] <= arr1[size1]){
                if (arr2[j] >= arr1[0] && arr2[j] <= arr1[size1]){
                    int counter1  = 0;
                    for(int m = 0; m < size1;){
                        if (arr2[j] % arr1[m] == 0){
                            counter1++;
                        }
                        m++;
                    }
                    int counter2  = 0;
                    for(int m = 0; m < size2;){
                        if (arr2[m] % arr2[j] == 0){
                            counter2++;
                        }
                        m++;
                    }
                    if (counter1 == size1-1 && counter2 == size2-1){
                        cout << arr2[j] << "  ";
                    }
                }
            }
            j++;
        }
        i++;
    }
    return 0;
}

int numberTwo(){
    cout << "\nEnter number of students: \n";
    int number;
    cin >> number;
    int arr1[number];
    for (int i = 0; i < number;){
        cout << "Enter " << i+1 << " student grade: \n";
        int grade;
        cin >> grade;
        arr1[i] = grade;
        i++;
    }

    int arr2[number];
    for (int i = 0; i < number;){
        if (arr1[i] >= 40) {
            if (arr1[i] % 5 == 0 || arr1[i] % 5 == 1 || arr1[i] % 5 == 2) {
                arr2[i] = arr1[i] - (arr1[i] % 5);
            }
            if (arr1[i] % 5 == 3 || arr1[i] % 5 == 4) {
                arr2[i] = arr1[i] - (arr1[i] % 5) + 5;
            }
        }
        else{
            arr2[i] = arr1[i];
        }
        i++;
    }

    cout << "+----------------------------------------------------+\n";
    cout << "|Number    |Entrance score      |Rounding result     |\n";
    cout << "+----------------------------------------------------+\n";
    for (int i = 0; i < number;){
        cout << "|" << i+1;
        if (0 <= i+1 && i+1 < 10) {
            cout << "         ";
        } else if (10 <= i+1 && i+1 < 100) {
            cout << "        ";
        } else if (100 <= i+1 && i+1 < 1000) {
            cout << "       ";
        } else if (1000 <= i+1 && i+1 < 10000) {
            cout << "      ";
        } else if (10000 <= i+1 && i+1 < 100000) {
            cout << "     ";
        } else if (100000 <= i+1 && i+1 < 1000000) {
            cout << "    ";
        } else if (1000000 <= i+1 && i+1 < 10000000) {
            cout << "   ";
        } else if (10000000 <= i+1 && i+1 < 100000000) {
            cout << "  ";
        } else if (100000000 <= i+1 && i+1 < 1000000000) {
            cout << " ";
        } else {
            cout << "";
        }


        cout << "|";
        cout << arr1[i];
        if (arr1[i] >= 0 && arr1[i] < 10){
            cout << "                   |";
        } else if (arr1[i] >= 10 && arr1[i] < 100){
            cout << "                  |";
        } else{
            cout << "                 |";
        }
        cout << arr2[i];
        if (arr2[i] >= 0 && arr2[i] < 10){
            cout << "                   |";
        } else if (arr2[i] >= 10 && arr2[i] < 100){
            cout << "                  |";
        } else{
            cout << "                 |";
        }
        cout << "\n+----------------------------------------------------+\n";
        i++;
    }
    return 0;
}
