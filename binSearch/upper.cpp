#include <iostream>
#include <vector>
using namespace std;

int bin_search(vector<int> &a, int k){
    int l = 0;
    int r = a.size() - 1;
    int res = -1;
    while (l < r) {
        int m = (l + r) / 2;
        if (a[m] > k) {
            res = m;
            r = m -1;
        }
        else 
            l = m + 1;
    }
    if (a[r] > k)
        res = r;
    return res;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    a.push_back(a[a.size() - 1] + 1);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    int index = bin_search(a, k);
    if (a[index] == k)
        cout << index;
    else 
        cout << -1;
    return 0;
}