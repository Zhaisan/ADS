#include <iostream>
#include <string>
using namespace std;
int main () {
    string name;
    cout << "Enter your name";
    getline(cin,name);
    cout << "Your name is" << name;
    cin.get ();
    return 0;
}