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
 
 
/*Author-KUSHAGRA SINGH
Birla Institute of Technology
CS K18
*/
 

 ll i,j,n,m,k;

int main (){
 
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin); 
freopen("output.txt", "w", stdout);
#endif

fast
ll mn=101;
ll mx=0;
ll mnt,mxt;

string a;
int p[4];
fr(i,0,4){
cin>>a;
p[i]=a.size()-2;
if(p[i]<mn) mn=p[i],mnt=i;
if(p[i]>mx) mx=p[i],mxt=i;
}

int flag1=0,flag2=0;


fr(i,0,4){
    if(2*mn<=p[i]) flag1++;
    if(mx>=2*p[i]) flag2++;
}
if((flag1>=3&&flag2>=3)||(flag1<3&&flag2<3))
cout<<"C";
else if(flag1>=3)
cout<<(char)('A'+mnt);
else cout<<(char)('A'+mxt);



    return 0;
 
}