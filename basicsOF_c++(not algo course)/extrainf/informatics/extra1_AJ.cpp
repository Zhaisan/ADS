//Является ли строка палиндромом?
#include <iostream>

using namespace std;

int main(){
	string s, a = "";
	getline(cin,s);
	int k = 0;
    for (int i=0; i < s.size(); ++i){
    	if (s[i]!=' ') 
        a=a+s[i];
    }
    bool pal = true;
    for (int i = 0; i < a.size(); ++i){
    	if (a[i]!=a[a.size()-i-1]) {
    		pal = false;
    		break;
    	}
    }
    if (pal) cout<<"yes";
    else cout<<"no";
    return 0;
}