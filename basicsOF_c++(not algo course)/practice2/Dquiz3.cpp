#include <iostream>
using namespace std;
int tribo(int x){
    if(x==0)
    return 0;
    if(x==1)
    return 1;
    if(x==2)
    return 1;
    return tribo(x-1)+tribo(x-2)+tribo(x-3);

}
int main(){
    int x;
    cin >> x;
    cout << tribo(x);
    return 0;
}