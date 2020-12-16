#include <bits/stdc++.h>
using namespace std;

int a[500000];
vector <int> v;
void go(int l, int r) {
    if(r < l)
        return;
    int m = (l + r) / 2;
    v.push_back(a[m]);
    go(m + 1, r);
    go(l, m - 1);
}
void quick(int l, int r) {

    int i = l;
    int j = r;
    int pvt = a[(l + r) / 2];

    while (i < j) {
        while (a[i] < pvt) i++;
        while (a[j] > pvt) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (l < j){
        quick(l, j);
    }
    if (i < r){
        quick(i, r);
    }
}

int main()
{
    int q; 
    cin >> q;
    int res = 1;
    while(q >= 1){
        res *= 2;
        --q;
    }
    q = res - 1;

    for(int i = 0; i < q; i++) {
        cin >> a[i];
    }
    quick(0, q - 1);

    go(0, q - 1);
    for(int x : v){
        cout << x << " ";

    }
    return 0;
}