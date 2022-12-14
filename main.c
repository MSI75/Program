// #include<stdio.h>

// int main(){
//     int n, i, x;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 1; i<n; i++){
//         scanf("%d", &x);
//         arr[x]=1;
//     }
//     for(int i= 1; i<=n; i++){
//         if(arr[i]==1){
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n, m;
    scanf("%d",&n);
 
    for(int i = 1; i<=n; i++){
        scanf("%d", &m);
        int arr[m];
        for(int j = 1; j<=m; j++){
            scanf("%d",&arr[j]);
            arr[j]=1;
        }

        for(int i = 1; i<=m; i++){
        if(arr[i]==1){
            continue;
        }
        printf("%d\n",i);
        break;
       }
    }
}