//Ноль или не ноль
#include <iostream>
using namespace std;
int main(){
	int n,i,j,c=0;
	cin>>n;
	for (i=0;i<n;i++) {
    cin>>j;	
    if (j==0) c++;    
      } if (c>0) cout<<"YES";
    else if (c==0) cout<<"NO"; 
    return 0;
}