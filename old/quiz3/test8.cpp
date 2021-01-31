#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> prefix_func(string s) {
    int n = s.size();
    vector<int> p(n);
    p[0] = 0;
    for (int i = 1; i < n; i++) {
        int j = p[i - 1];
        while (j > 0 && s[j] != s[i]) 
            j = p[j - 1];
        if (s[j] == s[i]) j++;
        p[i] = j;
    }
    return p;
}


int main(){
    string s, t;
    int k;
    cin >> t >> k >> s;
    int cnt = 0;
    string res = t + "#" + s;
    vector<int> p = prefix_func(res);
    for(int i = 0; i < res.size(); i++){
        if(p[i] == t.size())
            cnt++;
    }
    if(cnt >= k)
        cout << "YES";
    else 
        cout << "NO";
    return 0;
}