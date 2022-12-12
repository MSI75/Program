#include<stdio.h>

int lastDigitSum(int arr[], int i, int n){
    int sum = 0;
    if(n!=0){
        sum+= arr[i]%10 + lastDigitSum(arr, i+1, n-1);
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int sum = lastDigitSum(arr, 0, n);
    printf("%d \n",sum);
    return 0;
}