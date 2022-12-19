#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s", str);
    int arr['z'+1];
    for(int i = 0; i<='z'; i++){
        arr[i]=0;
    }
    for(int i = 0; i< n; i++){
        arr[str[i]]++;
    }
    int count = 0;
    for(int i = 'a'; i<='z'; i++){
        if(arr[i]==1)
            count++;   
    }
    printf("%d\n",count);

    return 0;
}