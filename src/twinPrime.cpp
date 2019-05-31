#include <iostream>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int a)
{
    if(a<=1)
    return false;

    int i;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a,b,diff;
    cin>>a>>b;
    if(isPrime(a) && isPrime(b))
    {
        diff = abs(a-b);
        if(diff==2)
        {
            cout<<"True";
        }
    }
    else
    {
        cout<<"False";
    }
}