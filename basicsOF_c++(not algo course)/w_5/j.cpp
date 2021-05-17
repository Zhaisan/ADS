

#include <bits/stdc++.h>
using namespace std;
int main(){
    double x,y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<pair<double,pair<int,int>>> v;
    for(int i=0;i<n;i++){
        double x0,y0;
        cin >> x0 >> y0;
        double d=sqrt(pow(x-x0,2)+pow(y-y0,2));
        v.push_back(make_pair(d,make_pair(x0,y0)));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout << v[i].second.first << " " << v[i].second.second << endl;
    }
    return 0;
}