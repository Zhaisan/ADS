//Количество решений
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int i,a,b,c,d,e,s=0;
	cin>>a>>b>>c>>d>>e;
	for (i=0;i<=1000;i++) {
    if ((a*pow(i,3)+b*pow(i,2)+c*i+d)/(i-e)==0) s=s+1;
	}
	cout<<s;
	return 0;
}