#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   ll n;
   cin>>n;
   ld x=n;
   ld root=sqrt(x);
   ld y=ceil(root);
   if(y==root)
       y+=((ld)(1.0));
   ld next=(y*y);
   ll ans=next;
   cout<<ans<<"\n";
}