//Modified "Towns"game
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
    string s;
    cin >> s;
    s[0] = tolower(s[0]);
    int n;
    cin >> n;
    int maxi = 0;
    vector<string> results;
    for(int i = 0; i < n; i++){
        string t;
        cin >> t;
        t[0] = tolower(t[0]);
        string res = t + "#" + s;
        vector<int> p = prefix_func(res);
        int tempAns = p[res.size() - 1];
        if(tempAns > maxi){
            results.clear();
            maxi = tempAns;
            results.push_back(t);
        } else if(tempAns == maxi && tempAns != 0){
            results.push_back(t);
        }
    }
    cout << results.size() << endl;
    for(int i = 0; i < results.size(); i++){
        string temp = results[i];
        temp[0] = toupper(temp[0]);
        cout << temp << endl;
    }
    return 0;
}