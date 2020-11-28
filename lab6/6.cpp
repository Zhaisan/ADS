#pragma comment(linker,"/STACK:1000000000,1000000000")
#pragma comment(linker, "/STACK:0x04000000")
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cassert>
#include <stack>
#include <set>
#include <iomanip>
#include <queue>
#include <map>
#include <functional>
#include <memory.h>
#include <list>
#include <sstream>
#include <ctime>
#include <climits>
#include <bitset>
#include <list>
#include <utility>
#include <cmath> 
#include <ctime>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <cstdlib> 

using namespace std;

#ifdef WIN32
	#define LLD "%I64d"
#else
	#define LLD "%lld"
#endif



const int MAXN=1e5+10;
typedef long long LL;
typedef unsigned int ui;
typedef unsigned long long ULL;

typedef pair <LL, LL> pll;
typedef pair <int, int> pi;
typedef pair <double, double> pd;
typedef long double LD;
typedef vector<int> vi;
typedef vector <bool> vb;
typedef vector <double> vd;
typedef vector <long long> vll;
typedef vector < vector <int> > vvi;
typedef vector < vector <bool> > vvb;
typedef vector < vector <double> > vvd;
typedef vector < pair <int, int> > vpi;
typedef pair<int,int> pii;
typedef struct{ int s,val[MAXN];} heap;

#define len(s) s.length()
#define pob(s) pop_back(s)
#define pub(s) push_back(s)
#define sf(a, b, i) for(size_t (i)=(a); (i) < (b); (i)++)
#define pr(n, v) for(size_t i=0; i < (n); i++) printf("%d", v[i])
#define sc(n, v) for(size_t i=0; i < (n); i++) scanf("%d", &v[i])

#define V(T) vector <T>
#define D(T) deque <T>
#define S(T) set <T>
#define M(T, T1) map <T, T1>
#define P(T) pair <T, T>
#define PA(T, T1) pair <T, T1>


#define f first
//#define s second
//#define pb push_back
#define mp make_pair
#define N 100100
#define all(x) x.begin(), x.end()
#define pp pop_back
#define gs(a) (int)(a).size()
#define forn(i, n) for(int i = 0; i < n; i ++)
#define fornn(i, n) for(int i = 1; i <= n; i ++)
#define fornr(i,n) for(int i=(n)-1;i>=0;--i)
#define forab(i,a,b) for(int i=(a);i<(b);++i)
#define FOR(a, c) for (int a = 0; a < (int)(c); a++)
#define FORN(a, b, c) for (int a = (int)(b); a < (int)(c); a++)
#define ROF(a, b) for (int a = (int)(b); a >= 0; a--)
#define ROFN(a, b, c) for (int a = (int)(b); a >= (int)(c); a--)
#define IFOR(a, b) for (decltype((b).begin()) a = (b).begin(); a != (b).end(); a++)
#define forit(i,A) for(__typeof((A).begin()) i=(A).begin();i!=(A).end();++i)
#define sqr(x) (x) * (x)
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it ++)
#define all(a) (a).begin(), (a).end()
#define forn2(i,n) for (ll (i)=0;(i)<(ll)(n);(i)++)
#define random (rand()<<16|rand())
#define pb push_back
#define mp make_pair
#define ll long long
#define double long double



// int a[N], n, m;

// const int inf = (int)1e9;
// const int mod = inf + 7;
// const double eps = 1e-4;
// const double pi = acos(-1.0);


// #1
// void pref(vi& p, string s) 
// {
// 	p.resize(s.length());
// 	p[0] = 0;
// 	for(size_t i=1; i < p.size(); i++) {
// 		int j = p[i-1];
// 		while(j > 0 && s[i] != s[j])
// 			j = p[j-1];
// 		if(s[j] == s[i])
// 			p[i] = j++;
// 		p[i] = j;
// 	}
// }
//


// #2
// string s,a[200];
// int t;

// int prefix (string s) 
//{
// 	int n = (int) s.length();
// 	vector<int> pi (n);
// 	for (int i=1; i<n; ++i) {
// 		int j = pi[i-1];
// 		while (j > 0 && s[i] != s[j])
// 			j = pi[j-1];
// 		if (s[i] == s[j])  ++j;
// 		pi[i] = j;
// 	}
// 	return s.size()-pi[s.size()-1];
// }


// #3
// string T, S;
// vector <int> Pi, ans;
// int ind=0;


// void Prefix(vector <int> &pi, string &s) 
// {

// 	int j = 0;
// 	for (int i=1; i<s.size(); i++) {
	
// 		j = pi[i-1];
// 		while (j > 0 && s[i]!=s[j])
// 			j = pi[j-1];

// 		if (s[i]==s[j])
// 			j++;

// 		pi[i]=j;

// 		if (pi[i]==S.length()) {
// 			cout << i-2*T.length();
// 			ind = 1;
// 			return;
// 		}

// 	}

// }


string s;
V(int) pf;

void pfun(string &s, V(int) &pf) {
    int n = gs(s);
    pf.assign(n, 0);
    FORN(i, 1, n) {
        for (pf[i] = pf[i - 1]; pf[i] && s[i] != s[pf[i]]; pf[i] = pf[pf[i] - 1]) {}
        pf[i] += s[pf[i]] == s[i];
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cout.setf(cout.fixed);
    cout.precision(20);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> s;
    pfun(s, pf);
    FOR(i, gs(pf)) 
    {
        cout << pf[i] << " ";
    }
    cout << endl;



    // #3
    // freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	// getline (cin, T);
	// getline (cin, S);

	// string temp = T + "#" + S + S;

	// Pi.resize (temp.length());
	// Prefix (Pi, temp);

	// if (ind==0) 
    // {
	// 	cout << -1;
	// }

    // #2
    // cin>>s;
	// t=prefix(s);
	// if(s.size()%t==0) cout<<s.size()/t;
	// else cout<<1;

    //#1
    // vi p;
	// string s1, s2;
	// cin >> s1 >> s2;
	// pref(p, s2+"#"+s1);
	// for(size_t i=0; i < p.size(); i++)
	// 	if(p[i] == s2.length())
	// 		printf("%d ", i-2*s2.length());

    return 0;
}