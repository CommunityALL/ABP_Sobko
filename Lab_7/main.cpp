#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Lab_7\nvar_4\n";

    int lines;
    cout << "\nEnter the number of lines:\n";
    cin >> lines;

    struct elements{
        string name;
        char type{};
        int quan{};
        int weight{};
    };

    elements array[lines];
    for (int i = 0; i < lines;){
            cout << "\nNote: the following type coding is adopted: O - original, P - purchased, B - borrowed\n";
            cout << "\nEnter the name/type/quan/weigh of " << i+1 << " element\n";
            cin >> array[i].name >> array[i].type >> array[i].quan >> array[i].weight;
            i++;
        }

    string ArrayNames[lines];
    char type[lines];
    int quan[lines];
    int weight[lines];

    for (int i = 0; i < lines;){
        ArrayNames[i] = array[i].name;
        type[i] = array[i].type;
        quan[i] = array[i].quan;
        weight[i] = array[i].weight;
        i++;
    }

    for (int i = 0; i < lines-1;){
        unsigned long long min;
        string minString, maxString;
        int equality = 0;
        if (ArrayNames[i].size() < ArrayNames[i+1].size()){
            min = ArrayNames[i].size();
            minString = ArrayNames[i];
            maxString = ArrayNames[i+1];
        }
        if (ArrayNames[i].size() == ArrayNames[i+1].size()){
            min = ArrayNames[i].size();
            minString = ArrayNames[i];
            maxString = ArrayNames[i+1];
        }
        if (ArrayNames[i].size() > ArrayNames[i+1].size()){
            min = ArrayNames[i+1].size();
            minString = ArrayNames[i+1];
            maxString = ArrayNames[i];
        }
        for (int j = 0; j < min;){
            if (ArrayNames[i][j] > ArrayNames[i+1][j]) {
                string variable = ArrayNames[i];
                ArrayNames[i] = ArrayNames[i + 1];
                ArrayNames[i + 1] = variable;
            }
            if (ArrayNames[i][j] == ArrayNames[i+1][j] && equality == j){
                if (ArrayNames[i][min-1] == ArrayNames[i+1][min-1]){
                    string variable = ArrayNames[i];
                    ArrayNames[i] = minString;
                    ArrayNames[i + 1] = maxString;
                }
                equality++;
            }
            j++;
        }
        i++;
    }

    for (int i = 0; i < lines;){
        ArrayNames[i] = ArrayNames[i].substr(0, 14);
        i++;
    }

    cout << "+-----------------------------------------------------------------+\n";
    cout << "|Details information                                              " << "|\n";
    cout << "+-----------------------------------------------------------------+\n";
    cout << "|Name          |Type  |Quantity       |Weight of 1 part (g)       " << "|\n";
    cout << "+-----------------------------------------------------------------+\n";
    for (int i = 0; i < lines;){
        cout << "|" << ArrayNames[i];
        for (int n = 1; n == 1; n++) {
            if (ArrayNames[i].size() == 1) {
                cout << "             |";
            } else if (ArrayNames[i].size() == 2) {
                cout << "            |";
            } else if (ArrayNames[i].size() == 3) {
                cout << "           |";
            } else if (ArrayNames[i].size() == 4) {
                cout << "          |";
            } else if (ArrayNames[i].size() == 5) {
                cout << "         |";
            } else if (ArrayNames[i].size() == 6) {
                cout << "        |";
            } else if (ArrayNames[i].size() == 7) {
                cout << "       |";
            } else if (ArrayNames[i].size() == 8) {
                cout << "      |";
            } else if (ArrayNames[i].size() == 9) {
                cout << "     |";
            } else if (ArrayNames[i].size() == 10) {
                cout << "    |";
            } else if (ArrayNames[i].size() == 11) {
                cout << "   |";
            } else if (ArrayNames[i].size() == 12) {
                cout << "  |";
            } else if (ArrayNames[i].size() == 13) {
                cout << " |";
            } else {
                cout << "|";
            }
        }
        cout << type[i] << "     |" << quan[i];
        for (int n = 1; n == 1; n++){
            if (0 <= quan[i] && quan[i] < 10) {
                cout << "              |";
            } else if (10 <= quan[i] && quan[i] < 100) {
                cout << "             |";
            } else if (100 <= quan[i] && quan[i] < 1000) {
                cout << "            |";
            } else if (1000 <= quan[i] && quan[i] < 10000) {
                cout << "           |";
            } else if (10000 <= quan[i] && quan[i] < 100000) {
                cout << "          |";
            } else if (100000 <= quan[i] && quan[i] < 1000000) {
                cout << "         |";
            } else if (1000000 <= quan[i] && quan[i] < 10000000) {
                cout << "        |";
            } else if (10000000 <= quan[i] && quan[i] < 100000000) {
                cout << "       |";
            } else if (100000000 <= quan[i] && quan[i] < 1000000000) {
                cout << "      |";
            } else {
                cout << "     |";
            }
        }
        cout << weight[i];
        for (int n2 = 1; n2 == 1; n2++) {
            if (0 <= weight[i] && weight[i] < 10) {
                cout << "                          ";
            } else if (10 <= weight[i] && weight[i] < 100) {
                cout << "                         ";
            } else if (100 <= weight[i] && weight[i] < 1000) {
                cout << "                        ";
            } else if (1000 <= weight[i] && weight[i] < 10000) {
                cout << "                       ";
            } else if (10000 <= weight[i] && weight[i] < 100000) {
                cout << "                      ";
            } else if (100000 <= weight[i] && weight[i] < 1000000) {
                cout << "                     ";
            } else if (1000000 <= weight[i] && weight[i] < 10000000) {
                cout << "                    ";
            } else if (10000000 <= weight[i] && weight[i] < 100000000) {
                cout << "                   ";
            } else if (100000000 <= weight[i] && weight[i] < 1000000000) {
                cout << "                  ";
            } else {
                cout << "                 ";
            }
        }
        cout << "|\n";
        cout << "+-----------------------------------------------------------------+\n";
        i++;
    }
    cout << "|Note: the following type coding is adopted: O - original,        |" << "\n";
    cout << "|P - purchased, B - borrowed                                      |\n";
    cout << "+-----------------------------------------------------------------+\n";
    return 0;
}