#include <iostream>
#include <string>
#include <vector>
using namespace std;

int cnt1[500500];
int cnt2[500500];

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
    string res1, res2, s;
    cin >> res1 >> res2 >> s;
    int m = s.size();
    string s1 = s + "#" + res1;
    string s2 = s + "#" + res2;
    vector<int> p1 = prefix_func(s1);
    vector<int> p2 = prefix_func(s2);
    for(int i = 0; i < s1.size(); i++){
        if(p1[i] == s.size())
            cnt1[i - m - m] = 1;
    }
    for(int i = 0; i < s2.size(); i++){
        if(p2[i] == m)
            cnt2[i - m - m] = 1;
    }
    int cnt = 0;
    for(int i = 0; i < res1.size(); i++){
        if(cnt1[i] == cnt2[i] && cnt1[i] == 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}