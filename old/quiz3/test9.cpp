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
    string s, t;
    cin >> s >> t;
    string res = s + "#" + t;
    vector<int> p = prefix_func(res);
    int first = p[res.size() - 1];
    res = t + "#" + s;
    vector<int> p2 = prefix_func(res);
    int second = p2[res.size() - 1];
    cout << max(first, second);
    return 0;
}