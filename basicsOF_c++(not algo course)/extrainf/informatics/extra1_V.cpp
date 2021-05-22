//Заполнение диагоналями
#include <iostream>
using namespace std;
int f,n,m,a[300][300];
void rec(int x, int y)
{
	if(x<1 || y<1 || x>n || y>m)
		return;
	a[x][y]=f;
	++f;
	rec(x+1,y-1);
}
int main()
{
	int i,j;
	cin>>n>>m;
	for(i=1;i<=m;++i)
		rec(1,i);
	for(i=2;i<=n;++i)
		rec(i,m);
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=m;++j)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}
	return 0;

}