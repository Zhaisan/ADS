//Pen-pineapple-apple-pen

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

bool find(string a, string s)
{
    p_pow.resize(a.size());
    calc_pow();
    long long find=hash_(s);
    vector<long long> h=hash_prefix(a);
    int n=a.size(),m=s.size();
    for(int i=n-m;i<n;i++)
    {
        int j=n-1;
        long long hash_i_j = h[j];
        hash_i_j -= h[i-1];
        if(hash_i_j == find*p_pow[i]) return true;
    }
    return false;
}

int main()
{
    string s, t;
    cin>>s>>t;
    int cnt=0;
    if(find(s, t)) cout<<s;
    else cout<<s+t;
    
    
    return 0;
}