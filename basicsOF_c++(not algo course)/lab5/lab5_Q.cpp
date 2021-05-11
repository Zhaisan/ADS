#include <iostream>
#include <string>

using namespace std;

int main(){
    string t, s;
    cin >> t >> s;
    while(s.size() > 0){
        if(s.find(t) != string::npos){
            cout << s.find(t) << " found" << endl;
            s = s.substr(t.size());
        }else{
            cout << s.find(t) << " not found" << endl;
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}