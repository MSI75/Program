#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    if((x%4==0 && x%100!=0)||(x%400==0)){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}