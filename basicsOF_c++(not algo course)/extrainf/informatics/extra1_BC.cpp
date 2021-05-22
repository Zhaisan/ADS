//Факториал
#include <iostream>
using namespace std;
int main(){
  int n, s=1, i;
     cin>>n;
     for (i=1; i<=n; ++i)
     {
         s=s*i;
     }
     cout<<s<<endl;
 }