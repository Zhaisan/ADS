#include <iostream>
using namespace std;
bool isdigit(char c){
    if(c-'0' < 0 || c - '0'> 9)
    return false;
    return true;
}
bool isPostCode(int a,int b,string s){
    for(int i=0;i<a;i++){
        if(!isdigit(s[i]))
        return false;
    }
    if(s[a]!= '-')
    return false;
    for(int i=a+1;i<s.size();i++){
        if(!isdigit(s[i]))
        return false;
    }
    return true;
    
}
int main(){
    string s;
    int a,b;
    cin >> a >> b >> s;
    if(isPostCode(a,b,s)==true)
    cout << "Yes";
    else 
    cout << "No";

}