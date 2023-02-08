#include <iostream>
#include <fstream>

using namespace std;

int Output(int lines){
    fstream file2;
    file2.open("myFile.txt", fstream::in);
    if(!file2.is_open()){
        cout << "File did not open.\n";
        return -1;
    }
    else {
        cout << "File opened.\n";
    }

    int counter = 15 + lines * 6;

    string ArrayNames2[lines];
    string type2[lines];
    string quan2[lines];
    string weight2[lines];

    int counter01 = 0;
    int counter02 = 0;
    int counter03 = 0;
    int counter04 = 0;

    for (int n = 1; n <= counter;) {
        string str;
        if (n <= 15) {
            file2 >> str;
        }
        if (n > 15 && n <= counter) {
            if ((n - 15) % 6 == 1) {
                file2 >> str;
                ArrayNames2[counter01] = str;
                counter01++;
            } else if ((n - 15) % 6 == 2) {
                file2 >> str;
                type2[counter02] = str;
                counter02++;
            } else if ((n - 15) % 6 == 3) {
                file2 >> str;
                quan2[counter03] = str;
                counter03++;
            } else if ((n - 15) % 6 == 4) {
                file2 >> str;
                weight2[counter04] = str;
                counter04++;
            } else {
                file2 >> str;
            }
        }
        n++;
    }

    int input2 = 1;
    while(input2 != 0) {
        cout << "You want to output...\n1 - table.\n2 - column.\n3 - row.\n4 - cell.\n(0 - finish output)\n";
        cin >> input2;

        if (input2 == 1) {
            cout << "+-----------------------------------------------------------------+\n";
            cout << "|Details information                                              |\n";
            cout << "+-----------------------------------------------------------------+\n";
            cout << "|Name          |Type  |Quantity       |Weight of 1 part (g)       |\n";
            cout << "+-----------------------------------------------------------------+\n";
            for (int i = 0; i < lines;) {
                cout << ArrayNames2[i];
                for (int n = 1; n == 1; n++) {
                    if (ArrayNames2[i].size() == 1) {
                        cout << "              ";
                    } else if (ArrayNames2[i].size() == 2) {
                        cout << "             ";
                    } else if (ArrayNames2[i].size() == 3) {
                        cout << "            ";
                    } else if (ArrayNames2[i].size() == 4) {
                        cout << "           ";
                    } else if (ArrayNames2[i].size() == 5) {
                        cout << "          ";
                    } else if (ArrayNames2[i].size() == 6) {
                        cout << "         ";
                    } else if (ArrayNames2[i].size() == 7) {
                        cout << "        ";
                    } else if (ArrayNames2[i].size() == 8) {
                        cout << "       ";
                    } else if (ArrayNames2[i].size() == 9) {
                        cout << "      ";
                    } else if (ArrayNames2[i].size() == 10) {
                        cout << "     ";
                    } else if (ArrayNames2[i].size() == 11) {
                        cout << "    ";
                    } else if (ArrayNames2[i].size() == 12) {
                        cout << "   ";
                    } else if (ArrayNames2[i].size() == 13) {
                        cout << "  ";
                    } else {
                        cout << " ";
                    }
                }
                cout << type2[i] << "     " << quan2[i];
                for (int n = 1; n == 1; n++) {
                    if (quan2[i].size() == 1) {
                        cout << "               ";
                    } else if (quan2[i].size() == 2) {
                        cout << "              ";
                    } else if (quan2[i].size() == 3) {
                        cout << "             ";
                    } else if (quan2[i].size() == 4) {
                        cout << "            ";
                    } else if (quan2[i].size() == 5) {
                        cout << "           ";
                    } else if (quan2[i].size() == 6) {
                        cout << "          ";
                    } else if (quan2[i].size() == 7) {
                        cout << "         ";
                    } else if (quan2[i].size() == 8) {
                        cout << "        ";
                    } else if (quan2[i].size() == 9) {
                        cout << "       ";
                    } else if (quan2[i].size() == 10) {
                        cout << "      ";
                    } else {
                        cout << "     ";
                    }
                }
                cout << weight2[i];
                for (int n2 = 1; n2 == 1; n2++) {
                    if (weight2[i].size() == 1) {
                        cout << "                           ";
                    } else if (weight2[i].size() == 2) {
                        cout << "                          ";
                    } else if (weight2[i].size() == 3) {
                        cout << "                         ";
                    } else if (weight2[i].size() == 4) {
                        cout << "                        ";
                    } else if (weight2[i].size() == 5) {
                        cout << "                       ";
                    } else if (weight2[i].size() == 6) {
                        cout << "                      ";
                    } else if (weight2[i].size() == 7) {
                        cout << "                     ";
                    } else if (weight2[i].size() == 8) {
                        cout << "                    ";
                    } else if (weight2[i].size() == 9) {
                        cout << "                   ";
                    } else if (weight2[i].size() == 10) {
                        cout << "                  ";
                    } else {
                        cout << "                 ";
                    }
                }
                cout << "|\n";
                cout << "+-----------------------------------------------------------------+\n";
                i++;
            }
            cout << "|Note: the following type coding is adopted: O - original,        |\n";
            cout << "|P - purchased, B - borrowed                                      |\n";
            cout << "+-----------------------------------------------------------------+\n";
        } else if (input2 == 2) {
            cout << "What is column to output?\n";
            cout << "1 - Name\n2 - Type\n3 - Quantity\n4 - Weight of 1 part (g)\n";
            int input3;
            cin >> input3;
            if (input3 == 1) {
                for (int i = 0; i < lines;) {
                    cout << ArrayNames2[i].erase(0, 1) << "\n";
                    i++;
                }
            } else if (input3 == 2) {
                for (int i = 0; i < lines;) {
                    cout << type2[i].erase(0, 1) << "\n";
                    i++;
                }
            } else if (input3 == 3) {
                for (int i = 0; i < lines;) {
                    cout << quan2[i].erase(0, 1) << "\n";
                    i++;
                }
            } else if (input3 == 4) {
                for (int i = 0; i < lines;) {
                    cout << weight2[i].erase(0, 1) << "\n";
                    i++;
                }
            } else {
                cout << "Incorrect input.\n";
            }
        } else if (input2 == 3) {
            cout << "What is row to output? (1 - " << lines << ")\n";
            int input3;
            cin >> input3;
            if (input3 > 0 && input3 <= lines) {
                cout << ArrayNames2[input3-1] << "   ";
                cout << type2[input3-1] << "   ";
                cout << quan2[input3-1] << "   ";
                cout << weight2[input3-1] << "\n";
            } else {
                cout << "Incorrect input.\n";
            }
        } else if (input2 == 4) {
            cout << "Enter the number of column and number of row:\n";
            cout << "1 - Name\n2 - Type\n3 - Quantity\n4 - Weight of 1 part (g)\n";
            int input01, input02;
            cin >> input01 >> input02;
            if (input01 == 1) {
                cout << ArrayNames2[input02-1] << "\n";
            } else if (input01 == 2) {
                cout << type2[input02-1] << "\n";
            } else if (input01 == 3) {
                cout << quan2[input02-1] << "\n";
            } else if (input01 == 4) {
                cout << weight2[input02-1] << "\n";
            } else {
                cout << "Incorrect input.\n";
            }
        } else if (input2 == 0){
            cout << "Output finish.\n";
        } else {
            cout << "Incorrect input.\n";
        }
    }
    file2.close();
    return 0;
}