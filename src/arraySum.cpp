#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter array elements: " << "\n";
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum += x;
    }
    cout << "Sum of array = " << sum << "\n";
}