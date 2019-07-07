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
	ll m,s,i,temp;
	cin>>m>>s;
	if(s<1 && m>1 || s>m*9)
	cout << "-1 -1";
	
	else {
	    
	for(i=m-1,temp=s;i>=0;i--){
	    int pos=max(0,temp-9*i);
	    if(pos==0&&i==m-1&&temp)
	        pos=1;
	    cout<<pos;
    	    temp-=pos;}
	cout<<' ';
	for(i=m-1,temp=s;i>=0;i--){
	    int pos=min(9,temp);
	    cout<<pos;
	    	temp-=pos;}
	}
}