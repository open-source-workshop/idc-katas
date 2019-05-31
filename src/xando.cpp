#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cntx=0,cnto=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='x')
        cntx++;
        else if(s[i]=='o')
        cnto++;
    }

    if(cntx==cnto)
    cout<<"equal no. of x and o exist";
    else
    cout<<"unequal no. of x and o";

    return 0;
}