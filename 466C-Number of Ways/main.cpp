#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define mii map<int, int>
#define vpll vector< pair <ll,ll> >
#define pll pair <ll,ll>
#define pq priority_queue< int >
#define khtm "\n"
#define fr(i,a,n) for(i=a;i<n;i++)
#define frr(i,a,n) for(i=n;i>a;i--)
#define mod 1000000007
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*Author-KUSHAGRA SINGH
Birla Institute of Technology
CS K18
*/

int main (){

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

fast
    
    ll i,j,n;
    ll ans=0, sum=0;
 

cin>>n;
    ll a[n],dp[n];
    fr(i,0,n) {
        cin>>a[i];
        sum += a[i];
    }
 
    if (sum % 3 ) 
          cout<<ans<<khtm;
        
 else {
        ll suf = 0, pre = 0;
 
        for ( i = n - 1; i >= 0; i--) {
            suf +=a[i];
            if (i < n - 1) dp[i] = dp[i + 1];
            else dp[i] = 0;
            if (suf == sum / 3) dp[i]++;
        }
 
        ans = 0;
        for ( i = 0; i < n - 2; i++) {
            pre += a[i];
            if (pre == sum / 3) ans += dp[i + 2];
        }
 
        cout<<ans<<khtm;
    }
    return 0;
}

