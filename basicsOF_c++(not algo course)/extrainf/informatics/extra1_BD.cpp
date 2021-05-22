//Степень
#include <iostream>
#include <cmath>
using namespace std;
int main(){
 int n, i=1,s;
 cin>>n;
 s=1;
 for (i=1; i<=n; ++i)
     {
         s=pow(2,i);
     }
     cout<<s<<endl;
 }