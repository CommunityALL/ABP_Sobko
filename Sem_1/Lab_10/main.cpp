#include <iostream>

using namespace std;

class Elements {
public:
    string Name;
    char Type{};
    int Quan{};
    int Weight{};
    static int set(int);
    static int get(int);
    static int show(int, int);
};

int Column(int);
int Row(int);
int Cell(int);

Elements *ElementsArrayNames;
string name1;
char type1;
int quan1;
int weight1;

struct elements {
    string name;
    elements *next{};
};

int main() {

    int lines = 0;

    elements *box, *element;
    box = nullptr;

    do{
        cout << "\nEnter the name of " << lines+1 << " element or \".\" to finish.\n";
        cin >> name1;
        element = new(elements);
        element->next = box;
        box = element;
        element->name = name1;
        lines++;
    } while (name1 != ".");
    lines--;

    string Array[lines];

    string ArrayNames[lines];
    char type[lines];
    int quan[lines];
    int weight[lines];

    int number = lines;
    do{
        box = element->next;
        element = box;
        Array[number-1] = box->name;
        number--;
    } while (box->next != nullptr);

    ElementsArrayNames = new Elements [lines];

    for (int i = 0; i < lines;){
        name1 = Array[i];
        cout << "\nNote: the following type coding is adopted: O - original, P - purchased, B - borrowed\n";
        cout << "\nEnter the type/quan/weigh of " << i + 1 << " element\n";
        cin >> type1 >> quan1 >> weight1;
        Elements::set(i);
        i++;
    }

    for (int i = 0; i < lines;){
        Elements::get(i);
        ArrayNames[i] = name1;
        type[i] = type1;
        quan[i] = quan1;
        weight[i] = weight1;
        i++;
    }

    for (int i = 0; i < lines;){
        ArrayNames[i] = ArrayNames[i].substr(0, 14);
        i++;
    }

    int input1 = 1;
    while(input1 != 0) {
        cout << "You want to output...\n1 - table.\n2 - column.\n3 - row.\n4 - cell.\n(0 - finish output)\n";
        cin >> input1;
        if (input1 == 1){

            cout << "+-----------------------------------------------------------------+\n";
            cout << "|Details information                                              " << "|\n";
            cout << "+-----------------------------------------------------------------+\n";
            cout << "|Name          |Type  |Quantity       |Weight of 1 part (g)       " << "|\n";
            cout << "+-----------------------------------------------------------------+\n";
            for (int i = 0; i < lines;) {
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
                for (int n = 1; n == 1; n++) {
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
        }
        else {
            Elements::show(input1, lines);
        }
    }

    return 0;
}

int Elements::set(int line){
    ElementsArrayNames[line].Name = name1;
    ElementsArrayNames[line].Type = type1;
    ElementsArrayNames[line].Quan = quan1;
    ElementsArrayNames[line].Weight = weight1;
    return 0;
}

int Elements::get(int i){
    name1 = ElementsArrayNames[i].Name;
    type1 = ElementsArrayNames[i].Type;
    quan1 = ElementsArrayNames[i].Quan;
    weight1 = ElementsArrayNames[i].Weight;
    return 0;
}

int Elements::show(int input1, int lines){
    if (input1 == 2){
        Column(lines);
    }
    else if (input1 == 3){
        Row(lines);
    }
    else if (input1 == 4){
        Cell(lines);
    }
    return 0;
}

int Column(int lines){
    cout << "What is column to output?\n";
    cout << "1 - Name\n2 - Type\n3 - Quantity\n4 - Weight of 1 part (g)\n";
    int input3;
    cin >> input3;
    if (input3 == 1) {
        for (int i = 0; i < lines;) {
            cout << ElementsArrayNames[i].Name << "\n";
            i++;
        }
    } else if (input3 == 2) {
        for (int i = 0; i < lines;) {
            cout << ElementsArrayNames[i].Type << "\n";
            i++;
        }
    } else if (input3 == 3) {
        for (int i = 0; i < lines;) {
            cout << ElementsArrayNames[i].Quan << "\n";
            i++;
        }
    } else if (input3 == 4) {
        for (int i = 0; i < lines;) {
            cout << ElementsArrayNames[i].Weight << "\n";
            i++;
        }
    } else {
        cout << "Incorrect input.\n";
    }
    return 0;
}

int Row(int lines){
    cout << "What is row to output? (1 - " << lines << ")\n";
    int input2;
    cin >> input2;
    if (input2 > 0 && input2 <= lines) {
        cout << ElementsArrayNames[input2-1].Name << "   ";
        cout << ElementsArrayNames[input2-1].Type << "   ";
        cout << ElementsArrayNames[input2-1].Quan << "   ";
        cout << ElementsArrayNames[input2-1].Weight << "\n";
    } else {
        cout << "Incorrect input.\n";
    }
    return 0;
}

int Cell(int lines){
    cout << "Enter the number of column:\n";
    cout << "1 - Name\n2 - Type\n3 - Quantity\n4 - Weight of 1 part (g)\n";
    int input01;
    cin >> input01;
    cout << "Enter the number of row (1 - " << lines << "):\n";
    int input02;
    cin >> input02;
    if (input01 == 1) {
        cout << ElementsArrayNames[input02-1].Name << "\n";
    } else if (input01 == 2) {
        cout << ElementsArrayNames[input02-1].Type << "\n";
    } else if (input01 == 3) {
        cout << ElementsArrayNames[input02-1].Quan << "\n";
    } else if (input01 == 4) {
        cout << ElementsArrayNames[input02-1].Weight << "\n";
    } else {
        cout << "Incorrect input.\n";
    }
    return 0;
}