//Совпадают ли строки
#include <iostream>
using namespace std;
int main() {
    string S1;
    string S2;
    bool Compare(string S1, string S2);
    cin >> S1 >> S2;
    if(S1==S2){
        cout << "yes";

    }
    else {
        cout << "no";
    }


    return 0;
}