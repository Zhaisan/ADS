#include <iostream>
using namespace std;
bool IS(int x1,int y1, int x2,int y2,int q,int f){
    if(q>=x1 && q<=x2 && f>= y2 && f<=y1 )
    return true;
    return false;
}
int main(){
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(IS(x1,y1,x2,y2,x3,y3)==true)
    cout << "yes";
    else cout << "no";
    return 0;
}
