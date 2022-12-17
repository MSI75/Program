#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    for(int i = 0; i<n;i++){
        scanf("%c",&str[i]);
    }


    int arr['z'+1] ;
    for(int i = 0; i<='z'; i++){
        arr[i]=0;
    }

    for(int i = 0; i<n; i++){
        arr[str[i]-'a']++;
    }
    // for(int i = 0; i<='z'; i++){
    //     // arr[str[i]-'a']++;
    //     printf("%d ",arr[i]);
    // }
    int count = 0;
    for(int i = 0; i<='z'; i++){
        if(arr[i]==1)
            count++;   
    }
    printf("%d\n",count);

    return 0;
}