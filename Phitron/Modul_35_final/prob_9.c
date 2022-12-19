#include<stdio.h>

int gcd(int a, int b){
    if(a==0)
    return b;

    return gcd(b%a, a);
}
void getInput(int arr[], int n){
    for(int i= 0; i<n; i++){
        scanf("%d",&arr[i]);
    }
}

int get_count(int arr[], int n){
    int count = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(i!=j){
                int x = gcd(arr[i], arr[j]);
                if(x==1){
                    count++;
                }
            }
        }
    } 
    return count;
}

int main(){
    int n, m, count; 
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++){
        int m;
        scanf("%d",&m);
        int ans[m];
        getInput(ans, m); 
        arr[i] = get_count(ans, m);
    }
       
    for(int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
