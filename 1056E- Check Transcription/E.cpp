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
ll a[MAX];
ll hsh[MAX],pows[MAX];

int main()
{
 
  #ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
//cout << setprecision(15) << fixed;
fast

  string s,t;
  ll prime = 31;
  cin >> s >> t;
  ll n0 = 0,n1;
  n = s.size(),m = t.size();
  for(auto c:s)
  {
      if(c == '0') 
          n0++;
  }
  n1= n - n0;
  pows[0] = 1;
  fr(i,1,1+m)
  {
      pows[i] = (pows[i-1]*prime)%mod;
  }
  
  fr(i,0,m)
  {
      if(i>0)
        hsh[i] = hsh[i-1] *prime;
      hsh[i] = (hsh[i] + (t[i]-'a'+1) ) %mod;
  }
  vpll pos;
  fr(i,1,1+m)
  {
      ll pre = m - i*n0;
      if(pre > 0 && !(pre%n1) )
          pos.pb(i,pre/n1);
  }
  ll ans = 0;
  for(auto x:pos)
  {
      ll hsha = 0, hshb = 0;
      bool seen1 = 0, seen2 = 0;
      ll res = 0;
      bool check = 0;
      fr(j,0,n)
      {
            if(s[j] == '0')
            {
              ll pos0 = x.F;
                if(!seen1)
                {
                    seen1 = 1;
                    hsha = hsh[res + pos0 - 1];
                    if(res > 0)
                        hsha = hsha - hsh[res-1] * pows[pos0] + mod * pows[pos0];
                    hsha %= mod;
                }
                else
                {
                    ll hshaa = hsh[res + pos0 - 1];
                    if(res > 0)
                        hshaa = hshaa - hsh[res-1] * pows[pos0] + mod * pows[pos0];
                    hshaa %= mod;
                    if(hshaa != hsha)
                    {
                        check = 1;
                        break;
                    }
                }
                res += pos0;
            }
            else
            {
              ll pos1 = x.S;
                if(!seen2)
                {
                    seen2 = 1;
                    hshb = hsh[res + pos1 - 1];
                    if(res > 0)
                        hshb = hshb - hsh[res-1] * pows[pos1] + mod * pows[pos1];
                    hshb %= mod;
                }
                else
                {
                    ll hshbb = hsh[res + pos1 - 1];
                    if(res > 0)
                        hshbb = hshbb - hsh[res-1] * pows[pos1] + mod * pows[pos1];
                    hshbb %= mod;
                    if(hshbb != hshb)
                    {
                        check = 1;
                        break;
                    }
                }
                res += pos1;
            }
        }


        if(!check && hsha != hshb)
            ++ans;
  }
  cout << ans;

  #ifndef ONLINE_JUDGE
  cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s";
  #endif
 
  return 0;
 
}