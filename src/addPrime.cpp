//Add all the numbers in an array which are prime numbers

#include<iostream>
using namespace std;

int isPrime(int a){
    bool flag=true;
    for(int i = 2; i <= a / 2; i++) {
       if(a % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main(){
    int n = 10;
    int arr[n];

    int sum = 0;

    for(int i =0; i<n; i++){
        if(isPrime(arr[i]))
            sum += arr[i];
    }

    cout<<"Sum of Primes: "<<sum<<endl;
    return 0;
}