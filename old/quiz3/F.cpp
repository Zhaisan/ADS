//Dominating Patterns
#include <bits/stdc++.h>
using namespace std;
long long p=31;
vector<long long> p_pow;

void calc_pow() 
{
    p_pow[0] = 1;
    for (int i = 1; i < p_pow.size(); i++)
        p_pow[i] = p_pow[i - 1] * p;
}

long long hash_(string s)
{
    long long sum=0;
    for(int i=0;i<s.size();i++)
        sum+=s[i]*p_pow[i];
    return sum;
}

vector<long long> hash_prefix(string s)
{
    vector<long long> h(s.size());
    h[0]=s[0];
    for(int i=1;i<s.size();i++)
        h[i]=h[i-1]+s[i]*p_pow[i];
    return h;
}

int find(string a, string s)
{
    int cnt = 0;
    p_pow.resize(a.size());
    calc_pow();
    long long find=hash_(s);
    vector<long long> h=hash_prefix(a);
    int n=a.size(),m=s.size();
    for(int i=0;i<n;i++)
    {
        int j=i+m-1;
        long long hash_i_j = h[j];
        if(i) hash_i_j -= h[i-1];
        if(hash_i_j == find*p_pow[i]) cnt++;
    }
    return cnt;
}

int main()
{
    int n;
    
    while(cin>>n){
        if(n==0) break;
        vector<string>v;
        for(int i=0;i<n;i++){
            string t;
            cin>>t;
            v.push_back(t);
        }
        string s;
        cin>>s;
        vector<pair<int, string> >pp;
        for(int i=0;i<n;i++) {
            pp.push_back(make_pair(find(s, v[i]), v[i]));
        }
        int max = -1e9;
        int ind;
        for(int i=0;i<n;i++){
            if(pp[i].first>max){
                max = pp[i].first;
                ind = i;
            }
        }
        // sort(pp.begin(), pp.end());
        // cout<<pp[pp.size()-1].first<<"\n"<<pp[pp.size()-1].second<<"\n";
        cout<<pp[ind].first<<"\n";
        for(int i = 0;i<pp.size();i++){
            if(pp[i].first == max)
                cout<<pp[i].second<<"\n";
        }
        
    }
    return 0;
}