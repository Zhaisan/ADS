#include <iostream>
#include <algorithm>
using namespace std;
bool lin(int x1,int y1,int x2,int y2){
    if(min(x1,y1)>min(x2,y2))
    return false;
    if(max(x1,y1)>max(x2,y2))
    return false;
    return true;
    
}

int main(){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if(lin(x1,y1,x2,y2)==true)
    cout << "Thanks, Nurbek";
    else
    {
        cout << "Impossible";
    }
    
    return 0;
}