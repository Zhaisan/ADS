#include <iostream>
#include <vector>
#include <string>
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
    int n;
    while (true)
    {
        cin >> n;
        if(n == 0)
            break;
        vector<string> words(n);

        for(int i = 0;i < n;i++){
            cin >> words[i];
        }
        int maxi = 0;
        vector<string> results;
        string s; cin >> s;
        for(int i = 0 ; i < words.size(); i++){
            int tempCnt = 0;
            string temp = words[i] + "#" + s;
            vector<int> p = prefix_func(temp);
            for(int j = 0; j < temp.size(); j++){
                if(p[j] == words[i].size())
                    tempCnt++;
            }
            if(tempCnt > maxi){
                maxi = tempCnt;
                results.clear();
                results.push_back(words[i]);
            } else if(tempCnt == maxi){
                results.push_back(words[i]);
            }
        }
        cout << maxi << endl;
        for(int i = 0; i < results.size(); i++){
            cout << results[i] << endl;
        }
        }
    return 0;
}