#include <bits/stdc++.h>

using namespace std;

string s;

int n;

int go(char c) {
    int res = 0;
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        res -= 1000;
    }
    
    res += c;
    return res;
}
void quick(int l, int r) {

    int i = l;
    int j = r;
    int res = s[(l + r)/2];
    while (i < j) {
    while (go(s[i]) < go(res)){ 
        i++;
    }
    while (go(s[j]) > go(res)){
        j--;
    }
    if (i <= j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    }
    if (l < j)
    quick(l, j);
    if (i < r)
    quick(i, r);
}


int main () {
    
    cin >> n;
    cin >> s;
    quick(0, s.size() - 1);
    cout << s << " ";
}