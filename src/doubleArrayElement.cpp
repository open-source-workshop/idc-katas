#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define db double
#define pll pair<ll,ll>
#define pdb pair<db,db>
#define clr(x) memset(x,0,sizeof(x))
#define count_bit(x) __builtin_popcount(x)
const ll size=1e6+7;
const ll mod=1e9+7;

int main()
{

    cout<<"Enter the size of the array"<<endl;
    ll n;cin>>n;
    cout<<"Enter the array elements"<<endl;
    vector<ll> vi;

    for(ll i=0;i<n;i++)
    {
    	ll x;cin>>x;
    	vi.pb(x);
    	vi[i] = 2*vi[i];
    }
    
    cout<<"The array elements after doubling are :"<<endl;
    for(auto x:vi)cout<<x<<" ";
}