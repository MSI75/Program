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

// #include<stdio.h>

// int main(){
//     int n, m;
//     scanf("%d",&n);
 
//     for(int i = 1; i<=n; i++){
//         scanf("%d", &m);
//         int arr[m];
//         for(int j = 1; j<=m; j++){
//             scanf("%d",&arr[j]);
//             arr[j]=1;
//         }

//         for(int i = 1; i<=m; i++){
//         if(arr[i]==1){
//             continue;
//         }
//         printf("%d\n",i);
//         break;
//        }
//     }
// }


// int main() {
//     // margin array
//     int n;
//     scanf("%d", &n);
//     int a[n], b[n], c[n*2];
    
//     for (int i = 0; i<n; i++)
//         scanf("%d", &a[i]);
    
//     for (int i = 0; i<n; i++)
//         scanf("%d", &b[i]);
    
//     int index = 0;
//     for(int i = 0; i<n; i++) {
//         c[index] = a[i];
//         index++;
//     }
    
//     for(int i = 0; i<n; i++) {
//         c[index] = b[i];
//         index++;
//     }
    
    
//     for(int i = 0; i<n*2; i++) {
//         printf("%d ", c[i]);
//     }
//     return 0;
// }

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        for(int j = n - i;j>1; j--){
            printf("  ");
        }
        for(int k = 0; k<n; k++){
            printf("#");
        }
        printf("\n");
        
    }
}

