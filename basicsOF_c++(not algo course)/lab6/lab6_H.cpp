#include <iostream>
#include <string>
using namespace std;
bool isVal(string s){
    for(int i=0;i<s.size();i++){
        if((s[i]-48)%2!=0)
        return false;
    }
    return true;

}
int main(){
    string s;
    cin >> s;
    if(isVal(s)==true)
    cout << "Valid";
    else 
    cout << "Not Valid";
    return 0;
}