// #include<stdio.h>

// void getInput(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
// }

// int maxMin(int arr[], int n){
//     int max = arr[0];
//     for(int i = 0; i<n; i++){
//         if(max<arr[i])
//         max = arr[i];
//     }

//     int min = arr[0];
//     for(int i = 0; i<n; i++){
//         if(min>arr[i])
//         min = arr[i];
//     }

//     int maximumPruduct = max*max;
//     return maximumPruduct;
//     int minimumPruduct = min*min;
//     return minimumPruduct;

//     int maximumSum = max+max;
//     return maximumSum;

//     int minimumSum = min+min;
//     return minimumSum;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         int m;
//         scanf("%d",&m);
//         int ans[m];
//         getInput(arr, m);

//         arr[i]=maxMin(arr, m);

//     //     int m;
//     //     scanf("%d",&m);
//     //     int ans[m];
//     //     for(int j = 0; j<m; j++){
//     //         scanf("%d",&ans[j]);
//     //     }

    
//     // int max=ans[1];
//     //    for(int j = 0; j<m; j++){
//     //     if(max<ans[j])
//     //     max = ans[i];
//     //     // printf("%d ", ans[j]);
        
//     //     }

//     //     int min = ans[0];
//     //     for(int j = 0; j<m; j++){
//     //     if(min>ans[j])
//     //     min = ans[j];
//     //     }


//     // int maximumPruduct = max*max;
//     // printf("%d ", maximumPruduct);
//     // int minimumPruduct = min*min;
//     // printf("%d ",minimumPruduct);
//     // int maximumSum = max+max;
//     // printf("%d ",maximumSum);
//     // int minimumSum = min+min;
//     // printf("%d ", minimumSum);

//     // printf("\n");

//     }

//     for(int i = 0; i<n; i++){
//         printf("%d\n", arr[i]);
//     }

    
// }


#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int n;
    scanf("%lld",&n);
   long long int arr[n];

    for(int i = 0; i<n; i++){
        int m;
        scanf("%d",&m);
        int ans[m];
        for(int j = 0; j<m; j++){
            scanf("%d",&ans[j]);
        }

        int max = ans[0];
        int min = ans[0];
        for(int j = 0; j<m; j++){
           if(ans[j]<0){
            if(max>ans[j]){
                max = ans[j];
            }
           }else{
             if(max<ans[j]){
                max = ans[j];
            }
           }
        }

         for(int j = 0; j<m; j++){
           if(ans[i]<0){
            if(min<ans[j]){
                min = ans[j];
            }
           }else{
             if(min>ans[j]){
                min = ans[j];
            }
           }
        }

        // printf("%d %d \n", max, min);

            int maximumPruduct = max*max;
    printf("%d ", abs(maximumPruduct));
    int minimumPruduct = min*min;
    printf("%d ",abs(minimumPruduct));


    int maximumSum = max+max;
    int minimumSum = min+min;


    if(maximumSum<minimumSum){
      printf("%d ", minimumSum);
    }else{
      printf("%d ",maximumSum);
    }

    if(maximumSum>minimumSum){
         printf("%d ", minimumSum);
    }else{
        printf("%d ",maximumSum);
       
    }
    

    printf("\n");

    }
}