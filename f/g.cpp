#include <bits/stdc++.h>
#define zhaiss ios_base::sync_with_stdio(false); cin.tie(NULL)
typedef long long ll;

using namespace std;

int n;

void go() {
    cin >> n;
    string s;
    vector<string> v;
    for(int i = 0; i < n; i++){
        int k = 0;
        char c;
        cin >> c >> s;
        if(c == '+'){
            v.push_back(s);
        }
        else if(c == '-'){
            v.erase(remove(v.begin(), v.end(), s), v.end());    
        }
        else{
            for(int j = 0; j < v.size(); j++){
                if(v[j].rfind(s, 0) == 0){
                    k++;
                }
            }
            cout << k << '\n';
        }
    }
    
}

int main(){
    zhaiss;
    int T = 1;
    while(T--){
        go();
        cout << '\n';
    }
}


