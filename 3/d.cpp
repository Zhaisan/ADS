#include <bits/stdc++.h>
typedef long long ll;

using namespace std;


vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}

int main(){
    string s;
    int k;
    string t;
    int cnt = 0;
    cin >> s >> k;
    cin >> t;
    int q = s.size();
    t = s + "#" + t;
    vector<int> p = prefix_func(t);
    for(int i = 0; i < t.size(); i++){
        if(p[i] == q){
            cnt++;
            

        }
    }

    if(cnt >= k){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}