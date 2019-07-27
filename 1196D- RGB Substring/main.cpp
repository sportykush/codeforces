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
#define testase int T; cin>>T; while(T--)
 
/*Author-KUSHAGRA SINGH
Birla Institute of Technology
CS K18
*/
 
ll i,j,n,k;
 
 
int main (){
 
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
 
fast
 testase{
    cin>>n>>k;
    string S; cin >> S;
        int best = k;
        int start = 0;
        char vals[3] = {'R', 'G', 'B'};
        fr(j,0,3) {
            int errorcount = 0;
            fr(i,0,k){
                if (S[i] != vals[(i+j)%3]) errorcount++;
            }
            best = min(best, errorcount);
            fr(i, k, n) {
                if (S[i] != vals[(i+j)%3]) errorcount++;
                if (S[i-k] != vals[(i+j-k)%3]) errorcount--;
                best = min(best, errorcount);
            }
        }
        cout << best << khtm;
 }
 
 
return 0;
 
}
 
 
 
 