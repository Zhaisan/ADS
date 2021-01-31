#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    char ch;
    string s;
    bool res = true;
    vector<string> v;
    while(true){
        res = true;
        cin >> ch;
        if(ch == '?'){
            cin >> s;
            for(int i = 0; i < s.size(); i++){
                if(s[i] >= 65 && s[i] <= 90){
                    s[i] += 32;
                }
            }
            if(v.empty()){
                    res = false;
            }else{
                for(int i = 0; i < v.size(); i++){ 
                    if(v[i].find(s) != -1){
                        res = true;
                        break;
                    }else{
                        res = false;
                    }
                }
            }
            if(res){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else if(ch == 'A'){
            cin >> s;
            for(int i = 0; i < s.size(); i++){
                if(s[i] >= 65 && s[i] <= 90){
                    s[i] += 32;
                }
            }
            v.push_back(s);
        }
    }
    return 0;
}