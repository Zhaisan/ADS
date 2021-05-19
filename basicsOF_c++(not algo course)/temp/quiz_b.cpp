#include <iostream>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    int s;
    int s1;
    s=a/b;
    int d1=s;
    for(int i=1; d1>=i;d1--){
        if(s%d1==0) {
            s1=s/d1;
            cout<<s1<< " ";
        }
    }
    return 0;
}