#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int countE = 0, countO = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0)
            countE = countE + s[i] - 48;
        else 
            countO += s[i] - 48;
    }
    if(countE == countO)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}