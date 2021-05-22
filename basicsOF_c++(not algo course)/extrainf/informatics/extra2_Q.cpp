// Самое длинное слово
#include <iostream>
#include <string>

using namespace std;
int main() {
    string a;
    getline(cin,a);
    a += " ";
    string s = "";
    string maxi ="";
    for(int i=0;i<a.size();i++){
        if(a[i]!=' '){
            s += a[i];
        }
        else{
            if(s.size()>maxi.size())
            
            maxi=s;
            s = "";
        }


    }
    cout << maxi << endl << maxi.size();   

    
    
    return 0;
}
