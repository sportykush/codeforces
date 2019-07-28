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
 
ld x1, y1, r1, x2, y2, r2;
ld sqr(ld a){
    return a*a;
}
 
int main (){
 
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
 
fast
 cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;
    ld dist = sqrt(sqr(x1-x2) + sqr(y1-y2));
    if(r2 < r1)
        swap(r1, r2); 
    if(dist >= r1 + r2)
        cout<<setprecision(10)<<(dist-(r2+r1))/2;
    else if(dist <=abs(r2-r1))
        cout<<setprecision(10)<<(abs(r2-r1)-dist)/2;
    else
        cout<<0;
	return 0;
 
}