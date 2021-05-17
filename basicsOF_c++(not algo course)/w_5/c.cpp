#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;
bool cmp(pair<string,double> a, pair<string,double> b){
    return a.second>b.second;
}
int main(){
    int n;
    cin >> n;
    vector<pair<string,double> > v;

    map <string,double> mp;
    int sum;
    for(int i=0;i<n;i++){
        string s;
        int k;
        cin >> s >> k;
        int sum=0;
        sum+=k;
        mp[s]+=k;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        double temp=(it->second/sum)*100;
        v.push_back(make_pair(it->first,temp));
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << "%" << endl;
        
    }


    return 0;
}