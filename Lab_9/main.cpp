#include <iostream>

using namespace std;

int Output(int);
int Input();

int main() {
    int lines = Input();
    cout << "1 - Finish\n2 - Data output\n";
    int input;
    cin >> input;
    if(input == 1){
        cout << "Finish.\n";
        return 1;
    }
    else if(input == 2){
        cout << "Data output.\n";
        Output(lines);
    }
    else {
        cout << "Incorrect input.\n";
        return -1;
    }
    return 0;
}