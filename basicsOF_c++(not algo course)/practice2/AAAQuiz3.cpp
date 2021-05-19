 #include <iostream>
using namespace std;
int counter(int a[],int l,int r){
    int maxi=a[l];
    int cnt=1;
    for(int i=l+1;i<=r;i++){
        if(a[i]>maxi){
        maxi=a[i];
        cnt++;
        }
    }
    return cnt;
}
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    int l,r;
    for(int i=0;i<q;i++){
        cin >> l >> r;
        cout << counter(a,l,r) << endl;
    }


}
    
    
    