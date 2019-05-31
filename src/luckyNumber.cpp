#include<bits/stdc++.h>
using namespace std;

bool luckyNumber(int n){

    bool count[10];
    for(int i = 0;i<10;i++)
        count[i] = 0;

    while(n > 0){
        int dig = n%10;
        if(count[dig])
            return false;
        n /= 10;
    }
    return true;

}

int main(){

    int n;
    cout<<"Enter a number :";
    cin>>n;

    bool ans = luckyNumber(n);
    if(ans){
        cout<<"It is a lucky number";
    }
    else{
        cout<<"It is not a lucky number";
    }

    return 0;
}