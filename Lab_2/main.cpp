#include <iostream>
#include <cmath>


using namespace std;

int lab_2_1 ();
int lab_2_2 ();

int main (){
    int part;
    cout << "What part of lab2?\n";
    cin >> part;
    switch (part) {
        case 1: {
            lab_2_1();
            break;
        }
        case 2: {
            lab_2_2 ();
            break;
        }
        default: {
            cout << "Incorrect input.\n";
        }
    }

}

int lab_2_1 () {

    cout << "Lab_2.1\nvar_4\n";

    double n = 0.0;
    double curr;
    double sum = 0.0;
    double k = 1.0;
    const double eps = 0.000001;
    curr = k * (n * n + 1.0) / (n * n * n + 3.0);
    sum = sum + curr;

    while (fabs(curr) >= eps) {

        n = n + 1.0;
        curr = k * (n * n + 1.0) / (n * n * n + 3.0);
        k = -k;
        sum = sum + curr;
        if (n == 9.0) {
            cout << "The sum of 10 members of the series (starting from 0): \n" << sum << "\n";
        }
//        if (n == 10.0) {
//            cout << "The sum of 11 members of the series: \n" << sum << "\n";
//            cout << "11 member series: \n" << curr << "\n";
//        }

    }
    cout << "The total sum of the series: \n" << sum << "\n" << "n = " << n << "\n";

}

int lab_2_2 (){
    cout << "Lab_2.2\nvar_4\n";

    char typeF, typeA, typeB;
    int quanF, quanA, quanB;
    int weightF, weightA, weightB;

    cout << "Enter data.\n";

    cout << "\nNote: the following type coding is adopted: O - original, P - purchased, B - borrowed\n";

    cout << "\nFlange:\n";
    cout << "type:";
    cin >> typeF;
    cout << "quantity:";
    cin >> quanF;
    cout << "weight of 1 part (g):";
    cin >> weightF;

    cout << "\nAdapter:\n";
    cout << "type:";
    cin >> typeA;
    cout << "quantity:";
    cin >> quanA;
    cout << "weight of 1 part (g):";
    cin >> weightA;

    cout << "\nBody:\n";
    cout << "type:";
    cin >> typeB;
    cout << "quantity:";
    cin >> quanB;
    cout << "weight of 1 part (g):";
    cin >> weightB;

    cout << "\n\n";

    cout << "+-------------------------------------------------------------+\n";
    cout << "|Details information                                          " << "|\n";
    cout << "+-------------------------------------------------------------+\n";
    cout << "|Name      |Type  |Quantity       |Weight of 1 part (g)       " << "|\n";
    cout << "+-------------------------------------------------------------+\n";
    cout << "|Flange    |" << typeF << "     |" << quanF;
    for (int n1 = 1; n1 == 1; n1++){
        if (0 <= quanF && quanF < 10) {
            cout << "              |";
        } else if (10 <= quanF && quanF < 100) {
            cout << "             |";
        } else if (100 <= quanF && quanF < 1000) {
            cout << "            |";
        } else if (1000 <= quanF && quanF < 10000) {
            cout << "           |";
        } else if (10000 <= quanF && quanF < 100000) {
            cout << "          |";
        } else if (100000 <= quanF && quanF < 1000000) {
            cout << "         |";
        } else if (1000000 <= quanF && quanF < 10000000) {
            cout << "        |";
        } else if (10000000 <= quanF && quanF < 100000000) {
            cout << "       |";
        } else if (100000000 <= quanF && quanF < 1000000000) {
            cout << "      |";
        } else {
            cout << "     |";
        }
    }
    cout << weightF;
    for (int n2 = 1; n2 == 1; n2++) {
        if (0 <= weightF && weightF < 10) {
            cout << "                          ";
        } else if (10 <= weightF && weightF < 100) {
            cout << "                         ";
        } else if (100 <= weightF && weightF < 1000) {
            cout << "                        ";
        } else if (1000 <= weightF && weightF < 10000) {
            cout << "                       ";
        } else if (10000 <= weightF && weightF < 100000) {
            cout << "                      ";
        } else if (100000 <= weightF && weightF < 1000000) {
            cout << "                     ";
        } else if (1000000 <= weightF && weightF < 10000000) {
            cout << "                    ";
        } else if (10000000 <= weightF && weightF < 100000000) {
            cout << "                   ";
        } else if (100000000 <= weightF && weightF < 1000000000) {
            cout << "                  ";
        } else {
            cout << "                 ";
        }
    }
    cout << "|\n";
    cout << "+-------------------------------------------------------------+\n";
    cout << "|Adapter   |" << typeA << "     |" << quanA;
    for (int n3 = 1; n3 == 1; n3++){
        if (0 <= quanA && quanA < 10) {
            cout << "              |";
        } else if (10 <= quanA && quanA < 100) {
            cout << "             |";
        } else if (100 <= quanA && quanA < 1000) {
            cout << "            |";
        } else if (1000 <= quanA && quanA < 10000) {
            cout << "           |";
        } else if (10000 <= quanA && quanA < 100000) {
            cout << "          |";
        } else if (100000 <= quanA && quanA < 1000000) {
            cout << "         |";
        } else if (1000000 <= quanA && quanA < 10000000) {
            cout << "        |";
        } else if (10000000 <= quanA && quanA < 100000000) {
            cout << "       |";
        } else if (100000000 <= quanA && quanA < 1000000000) {
            cout << "      |";
        } else {
            cout << "     |";
        }
    }
    cout << weightA;
    for (int n4 = 1; n4 == 1; n4++){
        if (0 <= weightA && weightA < 10) {
            cout << "                          ";
        } else if (10 <= weightA && weightA < 100) {
            cout << "                         ";
        } else if (100 <= weightA && weightA < 1000) {
            cout << "                        ";
        } else if (1000 <= weightA && weightA < 10000) {
            cout << "                       ";
        } else if (10000 <= weightA && weightA < 100000) {
            cout << "                      ";
        } else if (100000 <= weightA && weightA < 1000000) {
            cout << "                     ";
        } else if (1000000 <= weightA && weightA < 10000000) {
            cout << "                    ";
        } else if (10000000 <= weightA && weightA < 100000000) {
            cout << "                   ";
        } else if (100000000 <= weightA && weightA < 1000000000) {
            cout << "                  ";
        } else {
            cout << "                 ";
        }
    }
    cout << "|\n";
    cout << "+-------------------------------------------------------------+\n";
    cout << "|Body      |" << typeB << "     |" << quanB;
    for (int n5 = 1; n5 == 1; n5++){
        if (0 <= quanB && quanB < 10) {
            cout << "              |";
        } else if (10 <= quanB && quanB < 100) {
            cout << "             |";
        } else if (100 <= quanB && quanB < 1000) {
            cout << "            |";
        } else if (1000 <= quanB && quanB < 10000) {
            cout << "           |";
        } else if (10000 <= quanB && quanB < 100000) {
            cout << "          |";
        } else if (100000 <= quanB && quanB < 1000000) {
            cout << "         |";
        } else if (1000000 <= quanB && quanB < 10000000) {
            cout << "        |";
        } else if (10000000 <= quanB && quanB < 100000000) {
            cout << "       |";
        } else if (100000000 <= quanB && quanB < 1000000000) {
            cout << "      |";
        } else {
            cout << "     |";
        }
    }
    cout << weightB;
    for (int n6 = 1; n6 == 1; n6++){
        if (0 <= weightB && weightB < 10) {
            cout << "                          ";
        } else if (10 <= weightB && weightB < 100) {
            cout << "                         ";
        } else if (100 <= weightB && weightB < 1000) {
            cout << "                        ";
        } else if (1000 <= weightB && weightB < 10000) {
            cout << "                       ";
        } else if (10000 <= weightB && weightB < 100000) {
            cout << "                      ";
        } else if (100000 <= weightB && weightB < 1000000) {
            cout << "                     ";
        } else if (1000000 <= weightB && weightB < 10000000) {
            cout << "                    ";
        } else if (10000000 <= weightB && weightB < 100000000) {
            cout << "                   ";
        } else if (100000000 <= weightB && weightB < 1000000000) {
            cout << "                  ";
        } else {
            cout << "                 ";
        }
    }
    cout << "|\n";
    cout << "+-------------------------------------------------------------+\n";
    cout << "|Note: the following type coding is adopted: O - original,    |" << "\n";
    cout << "|P - purchased, B - borrowed                                  |\n";
    cout << "+-------------------------------------------------------------+\n";
}