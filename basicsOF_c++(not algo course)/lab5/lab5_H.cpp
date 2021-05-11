#include <iostream>
#include <string>
using namespace std;
int a[10];
int main() {
    string s;
    cin >> s;
    int cnt=0;

    for(int i=0;i<s.size();i++){
        a[s[i]-48]++;
    }
    for(int i=0;i<10;i++){
        if(a[i]>0 && cnt == 0){
            cnt = a[i];
        }
        else if(a[i]>0)
        {
            if(cnt!=a[i]){
            cout << "NO";
            return 0;
            }
        }
    }
    cout << "YES";
        

        




    
    return 0;
}