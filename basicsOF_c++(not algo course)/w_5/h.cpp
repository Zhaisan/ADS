#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){

        int temp;
        temp=s[i]+n;
        if(temp>90){
            temp%=90;
            temp+=64;
        }
        s[i]=temp;
    }
    cout << s;
    return 0;
}