#include <iostream>
#include <fstream>

using namespace std;

int Input(){
    struct Elements {
        string name;
        char type{};
        int quan{};
        int weight{};
        Elements *next{};
    };
    Elements *box, *element;
    box = nullptr;
    string a;
    int lines = 0;
    do{
        cout << "\nEnter the name of " << lines+1 << " element or \".\" to finish.\n";
        cin >> a;
        element = new(Elements);
        element->next = box;
        box = element;
        element->name = a;
        lines++;
    } while (a != ".");
    lines--;

    string ArrayNames[lines];
    char type[lines];
    int quan[lines];
    int weight[lines];

    int number = lines;
    do{
        box = element->next;
        element = box;
        ArrayNames[number-1] = box->name;
        number--;
    } while (box->next != nullptr);

    for (int n = 0; n < lines;){
        cout << "\nNote: the following type coding is adopted: O - original, P - purchased, B - borrowed\n";
        cout << "\nEnter the type/quan/weigh of " << n + 1 << " element\n";
        cin >> type[n] >> quan[n] >> weight[n];
        n++;
    }

    for (int i = 0; i < lines-1;){
        unsigned long long min;
        string minString, maxString;
        char minType, maxType;
        int minQuan, maxQuan;
        int minWeight, maxWeight;
        int equality1 = 0;
        int equality2 = 0;
        if (ArrayNames[i].size() < ArrayNames[i+1].size()){
            min = ArrayNames[i].size();
            minString = ArrayNames[i];
            maxString = ArrayNames[i+1];
            minType = type[i];
            minQuan = quan[i];
            minWeight = weight[i];
            maxType = type[i+1];
            maxQuan = quan[i+1];
            maxWeight = weight[i+1];
        }
        if (ArrayNames[i].size() == ArrayNames[i+1].size()){
            min = ArrayNames[i].size();
            minString = ArrayNames[i];
            maxString = ArrayNames[i+1];
            minType = type[i];
            minQuan = quan[i];
            minWeight = weight[i];
            maxType = type[i+1];
            maxQuan = quan[i+1];
            maxWeight = weight[i+1];
        }
        if (ArrayNames[i].size() > ArrayNames[i+1].size()){
            min = ArrayNames[i+1].size();
            minString = ArrayNames[i+1];
            maxString = ArrayNames[i];
            minType = type[i+1];
            minQuan = quan[i+1];
            minWeight = weight[i+1];
            maxType = type[i];
            maxQuan = quan[i];
            maxWeight = weight[i];
        }
        for (int j = 0; j < min;){
            if (ArrayNames[i][j] > ArrayNames[i+1][j] && equality1 == j) {
                string variable1 = ArrayNames[i];
                ArrayNames[i] = ArrayNames[i + 1];
                ArrayNames[i + 1] = variable1;
                char variable2 = type[i];
                type[i] = type[i+1];
                type[i+1] = variable2;
                int variable3 = quan[i];
                quan[i] = quan[i+1];
                quan[i+1] = variable3;
                int variable4 = weight[i];
                weight[i] = weight[i+1];
                weight[i+1] = variable4;
                equality1++;
            }
            if (ArrayNames[i][j] == ArrayNames[i+1][j] && equality2 == j){
                if (ArrayNames[i][min-1] == ArrayNames[i+1][min-1]){
                    string variable = ArrayNames[i];
                    ArrayNames[i] = minString;
                    ArrayNames[i + 1] = maxString;
                    type[i] = minType;
                    quan[i] = minQuan;
                    weight[i] = minWeight;
                    type[i+1] = maxType;
                    quan[i+1] = maxQuan;
                    weight[i+1] = maxWeight;
                }
                equality2++;
            }
            j++;
        }
        i++;
    }

    for (int i = 0; i < lines;){
        ArrayNames[i] = ArrayNames[i].substr(0, 14);
        i++;
    }

    fstream file;
    file.open("myFile.txt", fstream::app);
    if(!file.is_open()){
        cout << "File did not open.\n";
        return -1;
    }
    else {
        cout << "File opened.\n";
    }

    for (int i = 0; i < lines;){
        file << "|" << ArrayNames[i];
        for (int n = 1; n == 1; n++) {
            if (ArrayNames[i].size() == 1) {
                file << "             |";
            } else if (ArrayNames[i].size() == 2) {
                file << "            |";
            } else if (ArrayNames[i].size() == 3) {
                file << "           |";
            } else if (ArrayNames[i].size() == 4) {
                file << "          |";
            } else if (ArrayNames[i].size() == 5) {
                file << "         |";
            } else if (ArrayNames[i].size() == 6) {
                file << "        |";
            } else if (ArrayNames[i].size() == 7) {
                file << "       |";
            } else if (ArrayNames[i].size() == 8) {
                file << "      |";
            } else if (ArrayNames[i].size() == 9) {
                file << "     |";
            } else if (ArrayNames[i].size() == 10) {
                file << "    |";
            } else if (ArrayNames[i].size() == 11) {
                file << "   |";
            } else if (ArrayNames[i].size() == 12) {
                file << "  |";
            } else if (ArrayNames[i].size() == 13) {
                file << " |";
            } else {
                file << "|";
            }
        }
        file << type[i] << "     |" << quan[i];
        for (int n = 1; n == 1; n++){
            if (0 <= quan[i] && quan[i] < 10) {
                file << "              |";
            } else if (10 <= quan[i] && quan[i] < 100) {
                file << "             |";
            } else if (100 <= quan[i] && quan[i] < 1000) {
                file << "            |";
            } else if (1000 <= quan[i] && quan[i] < 10000) {
                file << "           |";
            } else if (10000 <= quan[i] && quan[i] < 100000) {
                file << "          |";
            } else if (100000 <= quan[i] && quan[i] < 1000000) {
                file << "         |";
            } else if (1000000 <= quan[i] && quan[i] < 10000000) {
                file << "        |";
            } else if (10000000 <= quan[i] && quan[i] < 100000000) {
                file << "       |";
            } else if (100000000 <= quan[i] && quan[i] < 1000000000) {
                file << "      |";
            } else {
                file << "     |";
            }
        }
        file << weight[i];
        for (int n2 = 1; n2 == 1; n2++) {
            if (0 <= weight[i] && weight[i] < 10) {
                file << "                          ";
            } else if (10 <= weight[i] && weight[i] < 100) {
                file << "                         ";
            } else if (100 <= weight[i] && weight[i] < 1000) {
                file << "                        ";
            } else if (1000 <= weight[i] && weight[i] < 10000) {
                file << "                       ";
            } else if (10000 <= weight[i] && weight[i] < 100000) {
                file << "                      ";
            } else if (100000 <= weight[i] && weight[i] < 1000000) {
                file << "                     ";
            } else if (1000000 <= weight[i] && weight[i] < 10000000) {
                file << "                    ";
            } else if (10000000 <= weight[i] && weight[i] < 100000000) {
                file << "                   ";
            } else if (100000000 <= weight[i] && weight[i] < 1000000000) {
                file << "                  ";
            } else {
                file << "                 ";
            }
        }
        file << "|\n";
        file << "+-----------------------------------------------------------------+\n";
        i++;
    }
    file << "|Note: the following type coding is adopted: O - original,        |\n";
    file << "|P - purchased, B - borrowed                                      |\n";
    file.write("+-----------------------------------------------------------------+", 67);
    file.close();
    return lines;
}