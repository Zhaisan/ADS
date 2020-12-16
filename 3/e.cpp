#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[i] != s[j])
            j = p[j - 1];
        if (s[i] == s[j])
            j++;
        p[i] = j;
    }
    return p;
}

int main(){
    string s;
    cin >> s;
    int q = s.size();
    vector<int> p = prefix_func(s);
    
    int cnt = 0;
    for (int i = p[q - 1]; i > 0; i = p[i - 1]){
        for (int j = 0; j < p.size(); j++){
            if (p[j] == i){
                cnt++;
            }
        }
        if(cnt > 1){
        
            cout << s.substr(0, i);
            return 0;
        }
    }
    cout << "Just a legend";

    return 0;
}