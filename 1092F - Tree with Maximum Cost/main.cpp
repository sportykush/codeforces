/*
auth - @sportykush
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
 
using namespace __gnu_pbds;
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set; 
 
//#define mp make_pair
#define bug(v)                    cerr<<#v<<" = "<<(v)<<endl;
#define ERASE(x)                  x.erase(unique(x.begin(),x.end()),x.end())
#define pb                        emplace_back
#define vii                       vector<int>
#define vll                       vector<ll>
#define vpll                      vector< pair <ll,ll> >
#define pll                       pair <ll,ll>
#define pii                       pair <int,int>
#define pq                        priority_queue< int >
#define khtm                      "\n"
#define F                         first
#define S                         second
#define fr(i,a,n)                 for(i=a;i<n;i++)
#define mem(arr,l)                memset(arr,l,sizeof arr)
#define ALL(x)                    x.begin(), x.end()
#define frr(i,a,n)                for(i=n-1;i>=a;i--)
#define fast                      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcase                  ll T; cin>>T; while(T--)


const int MAX = 1e6 +2;
const ll inf =  1e18;
const int N = 1010;
//const ll mod = 998244353 ;
const ll mod=1e9+7;
inline ll add(ll a,ll b){a+=b;if(a>=mod)a-=mod;return a;}
inline ll mul(ll a,ll b){return ((a%mod)*1ll*b)%mod;}
inline ll power(ll a,ll b){ll rt=1;while(b>0){if(b&1)rt=mul(rt,a);a=mul(a,a);b>>=1;}return rt;}


/*
important builtin functions
__gcd(value1, value2)
__builtin_ffs(x)
  Number of leading zeroes: __builtin_clz(x)
  Number of trailing zeroes : __builtin_ctz(x)
  Number of set bits: __builtin_popcount(x)
*/
 

ll i,j,k,l,m,r,n;
ll a[MAX],dp[MAX],sum[MAX];
vll adj[MAX];
ll tot = 0;

void dfs1(ll v, ll par, ll lvl)
{
	dp[1] += a[v]*lvl;
	sum[v] = a[v];
	for(auto u:adj[v])
	{
		if(u == par)
			continue;
		dfs1(u,v,lvl+1);
		sum[v] += sum[u];
	}
}


void dfs2(ll v, ll par)
{
	for(auto u:adj[v])
	{
		if(u == par)
			continue;
		//dp[u] = dp[v] - sum[u] + (tot - sum[u])
		dp[u] = dp[v] + tot - 2*sum[u];
		dfs2(u,v);
	}
}

int main()
{
 
  #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
//cout << setprecision(15) << fixed;
fast

//concept of rerooting 

	cin >> n;
	fr(i,1,1+n){
		cin >> a[i];
		tot+=a[i];
	}
	fr(i,1,n)
	{
		cin >> l >> r;
		adj[r].pb(l);
		adj[l].pb(r);
	}
	//cal for node1
	dfs1(1,0,0);
	//update all dp with the 2nd dfs
	dfs2(1,0);
	ll ans = -1;
	fr(i,1,1+n)
		ans = max(ans,dp[i]);
	cout << ans;


  #ifndef ONLINE_JUDGE
  cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s";
  #endif
 
  return 0;
 
}
