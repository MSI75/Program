#include<stdio.h>

void ascendingArray(int arr[], int n);
void descendingArray(int arr[], int n);

int main(){
    int n;
    scanf("%d",&n);
    int ascend[n];
    int descend[n];
    for(int i = 1; i<=n; i++){
        scanf("%d",&ascend[i]);
    }
    for(int i = 1; i<=n; i++){
        scanf("%d",&descend[i]);
    }

    ascendingArray(ascend, n);
    descendingArray(descend, n);

    for(int i = 1; i<=n; i++){
        int sub = ascend[i]-descend[i];
        printf("%d ", sub);
    }
    return 0;
}

void ascendingArray(int arr[], int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<n-i+1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

void descendingArray(int arr[], int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<n-i+1; j++){
            if(arr[j]<arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

