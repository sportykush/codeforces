#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define vpll vector< pair <ll,ll> >
#define pll pair <ll,ll>
#define pq priority_queue< int >
#define khtm "\n"
#define F first
#define S second
#define fr(i,a,n) for(i=a;i<n;i++)
#define frr(i,a,n) for(i=n;i>a;i--)
#define mod 998244353
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcase int T; cin>>T; while(T--)
const int MX = 1e5 + 5;

/*Author-KUSHAGRA SINGH
Birla Institute of Technology
CS K18
*/

//ll i,n,j,m,k;
 
 ll i,n,j,m,k;

ll cnt[MX],dp[MX],mxx;

int main (){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif

fast
int ar[4];
cin>>ar[0]>>ar[1]>>ar[2];
sort(ar,ar+3);

ll r = ar[2], g = ar[1], b = ar[0];
ll ans=(r+g+b)/3;
if ((b+g)<ans)
		ans = b+g;
	
		cout <<ans<< "\n";
	

    return 0;
 
}