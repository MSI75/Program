#include<stdio.h>

void getInput(int arr[], int n){
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}

int getOutput(int arr[], int n, int val){
    for(int i = 0; i<n; i++){
        if(arr[i]==val){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int m;
    scanf("%d",&m);
    int ans[m];

    for(int i = 1; i<=m; i++){
        int n;
        scanf("%d",&n);
        int arr[n];
        getInput(arr, n);

        int x;
        scanf("%d",&x);
        ans[i-1]=getOutput(arr, n, x);
    }

    for(int i = 1; i<=m;i++){
        if(ans[i-1]==-1){
            printf("Case %d: Not Found\n", i);
        }else{
            printf("Case %d: %d\n", i, ans[i-1]);
        }
    }

    return 0;
}