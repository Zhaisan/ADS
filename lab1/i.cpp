
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<stack<int>> all(n);
    bool f=false;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        for(int j=0;j<m;j++)
        {
            int val;
            cin>>val;
            all[i].push(val);
            if (val != i + 1) f = true;
        }
    }

    if(f)
    {
        if(n==2)
        {
            vector<stack< int> > st_copy = all;
            int current_size = st_copy[1].size();
            int some_size = st_copy[1].size() + st_copy[0].size();
            for(int j=0; j<current_size; ++j)
            {
                int number = st_copy[1].top();
                st_copy[1].pop();
                st_copy[0].push(number);
            }
            bool ok = true;
            vector<int> obtain;
            for (int i = 0; i < some_size; ++i) 
            {
                int temp = st_copy[0].top();
                st_copy[0].pop();
                obtain.push_back(temp);
            }
            for (int i = 1; i < obtain.size(); ++i) 
            {
                if (obtain[i - 1] < obtain[i]) 
                {
                    ok = false;
                }
            }

            if (!ok) 
            {
                cout<<0;
                return 0;
            }
        }
        int start = 0, temp = 1, end = n - 1;
        for(int i=1; i<n; i++)
        {
            int sizee=all[i].size();
            for(int j=0; j<sizee; j++)
            {
                int num = all[i].top();
                all[i].pop();
                all[0].push(num);
                cout<<i+1<<" "<<1<<endl;
            }
        }

        int sizee=all[0].size();
        for(int i=0; i<sizee; i++)
        {
            int num=all[0].top();
            all[0].pop();
            if(num==1)
            {
                cout<<1<<" "<<n<<endl;
                all[n-1].push(num);
            }
            else
            {
                cout<<1<<" "<<num<<endl;
                all[num-1].push(num);
            }
        }

        int cnt=0;
        sizee = all[n-1].size();
        for(int i=0; i<sizee; i++)
        {
            int num=all[n-1].top();
            all[n-1].pop();
            if(num==n)
            {
                cout<<n<<" "<<2<<endl;
                all[1].push(n);
                cnt++;
            }
            else
            {
                cout<<n<<" "<<1<<endl;
                all[0].push(num);
            }
        }
        for(int i=0; i<cnt; i++)
        {
            cout<<2<<" "<<n<<endl;
        }
    }
    return 0;
}