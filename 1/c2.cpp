#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int f(int l, int r){
    vector<int>::iterator it1 = lower_bound(a.begin(), a.end(), l);
    vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), r);
    return it2-it1;
}

int main() {
   int n,T, l1, l2, r1, r2; 
   cin >> n >> T;
   a.assign(n, 0);
   for (int i = 0; i < n; i++)
       cin >> a[i];
    sort(a.begin(), a.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    int cnt = 0;
    while(T--){
         cin >> l1 >> r1 >> l2 >> r2;
         int cnt = 0;
         if(l1<=l2 && r2<=r1){
             cnt+=f(l1, r1);
         }
         else if(l2<=l1&& r1<=r2){
            cnt+=f(l2, r2);
         }
         else if(l1<=l2&& l2<=r1 && r1<=r2){
            vector<int>::iterator it1 = lower_bound(a.begin(), a.end(), l1);
            vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), r1);
            vector<int>::iterator it3 = lower_bound(a.begin(), a.end(), l2);
            vector<int>::iterator it4 = upper_bound(a.begin(), a.end(), r2);
            cnt+= ((it2-it1)+(it4-it3)-(it2-it3));
            
         }
         else if(l2<=l1&& l1<=r2 && r2<=r1){
            vector<int>::iterator it1 = lower_bound(a.begin(), a.end(), l1);
            vector<int>::iterator it2 = upper_bound(a.begin(), a.end(), r1);
            vector<int>::iterator it3 = lower_bound(a.begin(), a.end(), l2);
            vector<int>::iterator it4 = upper_bound(a.begin(), a.end(), r2);
            cnt+= ((it2-it1)+(it4-it3)-(it4-it1));
         }else if(l1<=r1 && l2<=r2 && r1!=l2){
             cnt+=f(l1, r1)+f(l2, r2);
            

         }
        
         cout<< cnt <<' ';
    }
}