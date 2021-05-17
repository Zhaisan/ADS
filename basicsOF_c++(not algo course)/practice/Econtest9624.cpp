#include <iostream>
#include <string>
using namespace std;
bool Tony(string s){
    if(s.size()<3 || s.size()>15)
        return false;
    bool check = false;
    if(s[0] == 'A' || s[0] == 'E')
        check = true;
    int cnt = 0;
    for(int i = 1;i<s.size();i++){
        if(s[i] =='a' || s[i] =='e' ||  s[i] =='i' || s[i] =='o' || s[i]=='u' || s[i]=='y'){
            cnt++;
        }
        if(s[i] < 'a' || s[i] > 'z')
            return false;
    }
    if(cnt == 0 && check == false)
        return false;
    if(s[0] < 'A' || s[0] > 'Z') 
        return false;
    return true;

}
int main(){
    string s;
    cin >> s;
    if(Tony(s)==true)
    cout << "Hi"<< " " << s;
    else
    cout << "Invalid name";
    
    
    

    return 0;
}

