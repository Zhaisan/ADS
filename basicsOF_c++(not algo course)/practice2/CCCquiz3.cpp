#include <iostream>
using namespace std;
int fav(int a){
    int b,sum;
    sum=a%10;
    a=a/10;
    if(a==0) return sum;
    return sum + fav(a);
}
int main(){
    int a,n;
    cin >> a;
    n=a%10;
    if((fav(a)-n)%n!=0)
    cout << "No";
    else cout << "Yes";

}


