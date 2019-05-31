// Add all the even values in an array and return the sum.

#include<bits/stdc++.h>

using namespace std;

int  main() {
    int n;
    cout << "Enter the number of elements in array\n";
    cin >> n;
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    cout << sum << "\n";
    return 0;
}
