#include <bits/stdc++.h>
using namespace std;

string binToHex(string binary){
	string hex;
	int i,j,k;
	for(int i=binary.size()-1;i>=0;i-=4){
		int k=0;
		for(j=max(i-3,0);j<=i;j++){
			k = k*2 + (int)(binary[j]-48);
		}
		char c;
		if(k<10){
			c = k+48;
		}
		else c = k+55;
		hex = c + hex;
	}
	return hex;
}

int main() {
	cout<<"Enter binary string:\n";
	string s;
	cin>>s;
	cout<<binToHex(s)<<"\n";
	return 0;
}