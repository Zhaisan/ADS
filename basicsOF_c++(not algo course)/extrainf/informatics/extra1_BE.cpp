//Сумма степеней
#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int i,n,s=0;
 cin>>n;
 for (i=0; i<=n; i++) {
 s=s+pow(2,i);
 } cout<<s;
 return 0;
}
