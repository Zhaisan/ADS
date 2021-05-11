#include <iostream>
using namespace std;
char up(char c){
    c=toupper(c);
    return c;
}
int main(){
    char c;
    cin >> c;
    cout << up(c);
    return 0;
}