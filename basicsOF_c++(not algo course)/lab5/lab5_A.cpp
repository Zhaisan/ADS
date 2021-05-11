#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    cin >> s1 ;

    int cnt1=0,cnt2=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]>='a' && s1[i]<='z'){
            cnt1++;
        
        }
        
        else if(s1[i]>='A' && s1[i]<='Z'){
            cnt2++;

        }

        

    }
    cout << cnt1 << " " << cnt2;




    return 0;
}