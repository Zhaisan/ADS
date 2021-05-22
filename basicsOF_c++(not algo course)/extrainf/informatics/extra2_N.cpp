//Изменить регистр символа
#include <iostream>
using namespace std;
int main() {
    char c;
    cin >> c;
    if(c>='A' && c<='Z'){
        c=c-'A'+'a';
    }
    else if(c>='a' && c<='z'){
        c=c-'a'+'A';
    }
    cout << c;
    return 0;
}