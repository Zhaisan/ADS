#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main(){
    vector <int> v;
    while(true){
        string s;
        cin >> s ;
        if(s == "exit"){
            cout << "bye";
            break;
        }
        if(s == "push"){
            int n;
            cin >> n;
            v.push_back(n);
            cout << "ok" << endl;
        }
        else if(s == "pop"){
            if(v.size()!= 0){
                cout << v[v.size() - 1] << endl;
                v.pop_back();
            }
            else{
                cout << "error" << endl;
            }
            
        }
        else if(s == "size"){
            cout << v.size() << endl;
        }
        else if(s == "clear"){
            cout << "ok" << endl;
            v.clear();
        }
        else if(s == "back"){
            if(v.size()!= 0){
                cout << v[v.size() - 1] << endl;
            }
            else{
                cout << "error" << endl;
            }
        }


    }
    return 0;
}