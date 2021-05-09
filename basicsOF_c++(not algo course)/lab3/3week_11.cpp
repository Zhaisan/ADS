// How many times?

#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    char c[n];
    int cnt[26];
    for(int i=0; i<26;i++){
        cnt[i]=0;
    }
    for(int i = 0; i<n;i++){
        cin>> c[i];
        int position = c[i] - 'a';
        cnt[position]++;
    }
    for(int i=0;i<26;i++) {
        if(cnt[i] !=0) {
            cout << char(i+ 'a') << ' ' << cnt[i] << endl;
        }
    }


}