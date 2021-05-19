#include <iostream>
#include <vector>
using namespace std;
int x,cntOdd,cntEven;
int main(){
    vector <int> v;
    while(cin >> x){
        if(x<0)
        break;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0)
        cntEven++;
        if(v[i]%2==1)
        cntOdd++;
    }
    double a= double(cntEven*100)/v.size(),b=double(cntOdd*100)/v.size();
    cout << a << "%" << " " << b << "%";

    
    return 0;
}