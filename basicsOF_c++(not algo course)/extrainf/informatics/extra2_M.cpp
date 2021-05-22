// Перевести символ в верхний символ
#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if(c>='a' && c<='z'){
        c=c-'a'+'A';
    }
    cout << c;
    return 0;



}