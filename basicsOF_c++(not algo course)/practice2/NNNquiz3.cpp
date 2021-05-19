#include <iostream>
using namespace std;
bool bishop(int x1,int y1,int x2,int y2){
    if(x1+y1==x2+y2 || x2-x1==y2-y1)
    return true;
    return false;
}
int main() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(bishop(x1,y1,x2,y2)==true)
    cout << "YES";
    else cout << "NO";
    return 0;
}