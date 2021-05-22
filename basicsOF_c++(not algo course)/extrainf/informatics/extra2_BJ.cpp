#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string f = "f";
    int dx = 0;
    cin >> s;
    // if(s.find(f) != string::npos){
    //     dx = s.find(f) + 1;
    //     s = s.substr(s.find(f) + 1);
    // }else {
    //     cout << -2 << endl;
    //     return 0;
    // }
    // if(s.find(f) != string::npos)
    //     cout << s.find(f) + dx << endl;
    // else 
    //     cout << -1 ;
    bool check = false;
    int index = -2;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'f' && check == false){
            check = true;
            index = -1;
        }
        else if(s[i] == 'f' && check == true){
            index = i;
            break;
        }
    }
    cout << index;
    return 0;
}
