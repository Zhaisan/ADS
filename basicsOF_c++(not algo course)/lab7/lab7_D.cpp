#include <iostream>
#include <string>
using namespace std;

int sumOfDigits(string s, int i){
    if(i == s.size())
        return 0;
    return (s[i] - 48) + sumOfDigits(s, i + 1);
}

int main(){
    string s;
    cin >> s;
    cout << sumOfDigits(s, 0);
    return 0;
}