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
#define mod 1e9+7
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define testcase int T; cin>>T; while(T--)
 
 
/*Author-KUSHAGRA SINGH
Birla Institute of Technology Mesra
CS K18
*/
 
 
 // ll i,n,j,m,k;
 
 
 
int main (){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif
 
fast
 
 
 ll i,n,j,m,k,l,r;
 
// testcase{
// 	ll i,n,j,m,k,l,r;
// 	cin>>n>>m>>k;
// 	ll a[500001] = {0};
// 	if(n==1)
// 		a[m]+=k;
 
// 	if(n==2){
 
// 	}
// }
 
 
int digit[10];
 vll v;
int index=1;
    cin >> n;
    fr(i,1,10){
        cin >> digit[i];
        if (digit[i] <= digit[index])
            index = i;
    }
    if (digit[index] > n){
    cout << -1;
    return 0;
    }
    while (n - digit[index] >= 0){
        v.pb(digit[index]);
        n -=digit[index];
    }
     i = 0;
    while (i < v.size() && n >=0){
        j = index;
        fr(k,j,10){
            if (n - digit[k] + digit[j] >= 0){
                n -= digit[k] - digit[j];
                j = k;
                v[i] = j;
            }
        }
        i++;
    }
    for(auto u:v)
    	cout<<u;
 
	return 0;
    
 
}