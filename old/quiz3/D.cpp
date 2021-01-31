//Mortal Kombat
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

int main()
{
    vector<int> pos;
    string a,b;
    cin>>b>>a;
    p_pow.resize(a.size());
    calc_pow();
    long long find=hash_(b);
    vector<long long> h=hash_prefix(a);
    int n=a.size(),m=b.size();
    for(int i=0;i+m-1<n;i++)
    {
        int j=i+m-1;
        long long hash_i_j = h[j];
        if(i) hash_i_j -= h[i-1];
        if(hash_i_j == find*p_pow[i]) pos.push_back(i);
    }
    int cnt=1,imax=cnt,cur=pos[0],dif=b.size();
    for(int i=1;i<pos.size();i++) 
    {
        // cout<<i<<" "<<cur<<endl;
        if(pos[i]==dif+cur)
        {
            cnt++;
            cur=pos[i];
        }
        else 
        {
            cnt=1;
            cur=pos[i];
        }
        imax=max(imax,cnt);
    }
    // cout<<cnt<<" "<<imax<<" "<<dif<<endl;
    // for(int i=0;i<pos.size();i++) cout<<pos[i]<<" ";
    cout<<imax;
    return 0;
}