#include <iostream>
#include <string>
#include <algorithm>
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
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    string s, t;
    cin >> t >> s;
    string s1 = t + "#" +s;
    int m = t.size();
    int maxi = 0;
    vector<int> p = prefix_func(s1);
    int tempCnt = 0;
    bool check = false;
    for(int i = 0; i < s1.size(); i++){
        if(p[i] == m){
            tempCnt++;
            i += m - 1;
            // cout << i << " ";
        }else{
            if(tempCnt > maxi)
                maxi = tempCnt;
            tempCnt = 0;
        }
        // cout << p[i] << " ";
    }
    if(tempCnt > maxi)
        maxi = tempCnt;
    cout << maxi;
    return 0;
}