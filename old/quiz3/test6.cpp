
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
        if (s[j] == s[i])
            j++;
        p[i] = j;
    }
    return p;
}

int main(){
    freopen("input.txt", "r", stdin);
    string s1, s2, t;
    cin >> s1 >> s2 >> t;
    string res1 = t + "#" + s1;
    string res2 = t + "#" + s2;
    vector<int> p1 = prefix_func(res1);
    vector<int> p2 = prefix_func(res2);
    int n = res1.size();
    int m = t.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(p1[i] == m && p2[i] == m)
            cnt++;
    }
    cout << cnt;
    return 0;
}