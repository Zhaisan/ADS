//Количество слов
#include <iostream>
#include <string>

using namespace std;

int main(){
	string a;
	getline(cin,a);
	int k=0;
	for(int i=0; i<a.size(); ++i){
		if (a[i]==' ') k++;
	}
    cout<<k+1;
	return 0;
}