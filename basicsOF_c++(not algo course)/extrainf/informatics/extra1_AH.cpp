//Поиск подстроки
#include <iostream>

using namespace std;

int main(){
	string a;
	getline(cin,a);
	string s;
	getline(cin,s);
	size_t x = s.find(a);
	if (x != string::npos) cout<<"yes";
	else cout<<"no";
	return 0;
}