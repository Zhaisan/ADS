#include <iostream>
using namespace std;
int main(){
    int n,k=0,b=0;
    cin>>n;
    int i=0;
    while(i!=6){
        k=n%2;
        if(k==0){
            b++;
        }
        i++;
        n/=2;


    }
    cout<<b<<endl;
   
      return 0;
}