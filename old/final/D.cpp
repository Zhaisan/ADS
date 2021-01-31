#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

vector<int> prefix_function(string s) {
    int n = s.size();
    vector<int> p(n, 0);
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

int main() {
    string s, t;
    cin >> s >> t;
    s = t + '#' + s;
    int cnt = 0;
    vector<int> p = prefix_function(s);                                                       
    for (int i = 0; i < s.size(); i++) {                
        if (p[i] == t.size()){
            cnt++;
        }                           
    }
    cout << cnt;
    return 0;
}