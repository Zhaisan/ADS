// Подсчет чисел
#include <iostream>
using namespace std;
int main(){
	int n,i,j,s=0,s1=0,s2=0;
	cin>>n;
	for (i=0;i<n;i++) {
    cin>>j;	
     if (j==0) { s++; }
     else if (j>0) { s1++; }
    else { s2++; }
	} cout<<s<<" "<<s1<<" "<<s2;
    return 0;
}