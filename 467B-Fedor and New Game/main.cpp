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
    ll i,j,n,m,k;
    cin>>n>>m>>k;
    ll x[m+1];
    fr(i,0,m+1)
    cin>>x[i];
    ll friends = 0;
 
    fr(i,0,m)
    {
        ll t = 0;
        fr(j,0,n){
            if (((x[i] >> j) & 1) != ((x[m] >> j) & 1))
                t++;
        }
        if(t <= k)
            friends++;
    }
 
    cout << friends << khtm;
    return 0;
}
 