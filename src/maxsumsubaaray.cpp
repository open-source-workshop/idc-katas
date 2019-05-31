#include<climits>

using namespace std;


int main(){
    int n;
    printf("Enter the array size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("%d",maxSubArray(arr));
}
int maxSubArray(int *A) {
    int max_sum = INT_MIN,sum = 0,i;
    for(i=0;i<A.size();i++)
    {
        sum+=A[i];
        if(max_sum<sum)
            max_sum = sum;
        if(sum<0)
            sum = 0;
    }
    return max_sum;
}
