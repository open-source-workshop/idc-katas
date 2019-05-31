#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,3,2,4,5,3,2,6,8,9};
    int sum = 0;
    for(int i = 0; i < 10; i++){
        if(arr[i]%2){
            sum+=arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}
