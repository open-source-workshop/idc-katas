#include<bits/stdc++.h>
using namespace std;
class digitSum 
{ 
    public: 
    int getSum(int n) 
    {  
    	int sum=0;
    	while(n!=0)
    	{
 			sum=sum+n%10;
 			n/=10;   		
    	} 
	 return sum; 
 	} 
}; 