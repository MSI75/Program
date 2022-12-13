#include<stdio.h>

int sumRecursion(int n){
    if(n==0)return 0;
    return n+sumRecursion(n-1);
}

int main(){
    int n;
    scanf("%d",&n);
    int sum = sumRecursion(n);
    printf("%d\n",sum);
    return 0;
}