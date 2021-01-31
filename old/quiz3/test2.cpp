#include <iostream>
#include <vector>
#include <string>

using namespace std;
int cnt[500500];
vector<int> get_hash(string s) {
    int n = s.size();
    vector<int> h(n);
    int p = 31;
    int p_pow = 1;
    h[0] = s[0];
    for (int i = 1; i < n; i++) {
        p_pow *= p;
        h[i] = h[i - 1] + s[i] * p_pow;
    }
    return h;
}

int main() {
    string s, t;
    int q;
    cin >> q;
    // int h_t = get_hash(t)[t.size() - 1];
    vector<string> words;
    for(int i = 0; i < q; i++){
        cin >> t;
        words.push_back(t);
    }
    cin >> s;
    int n = s.size();
    int p[n];
    p[0] = 1;
    for (int i = 1; i < n; i++)
        p[i] = p[i - 1] * 31;
    vector<int> h_s = get_hash(s);
    for(int l = 0; l < q; l++){
        string temp = words[l];
        int m = temp.size();
        int h_t = get_hash(temp)[temp.size() - 1];
        bool check = true;
        for (int i = 0; i < n - m + 1; i++) {
            int j = i + m - 1;
            int hash_i_j = h_s[j];
            if (i > 0)
                hash_i_j = hash_i_j - h_s[i - 1];
            if (hash_i_j == h_t * p[i]) {
                cnt[l]++;
            }
        } 
    }
    int maxi = 0;
    for(int i = 0; i < q; i++)
        if(cnt[i] > maxi)
            maxi = cnt[i];
    cout << maxi << endl;
    for(int i = 0; i < q; i++){
        if(cnt[i] == maxi)
            cout << words[i] << endl;
    }
    return 0;
}