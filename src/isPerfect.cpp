#include<bits/stdc++.h>
using namespace std;

signed main(){
	long long int n;
	cin >> n;
	long long int x = sqrt(n);
	if(x*x == n)
		cout << "Perfect Square";
	else
		cout << "Not a Perfect Square";
}