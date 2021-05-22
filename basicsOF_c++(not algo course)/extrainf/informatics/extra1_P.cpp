//Состязания - 3
#include<iostream>
using namespace std;
int main()
{
    int a[111][111],i,n,m,q=-1,b[111],w,ii,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            b[i]=a[i][j]+b[i];
           
        }  
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]>q)
            {
                q=a[i][j];
                ii=i;  
            }      
            else if(a[i][j]==q)
            {
                if(b[ii]<b[i])
                {
                    ii=i;
                    b[ii]=b[i];                
                }
            }
        }
    }
    cout<<ii;
    return 0;
}
 