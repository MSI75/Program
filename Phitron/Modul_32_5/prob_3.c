#include<stdio.h>

void oneToN(int i,int n){
    if(i==n)return; 
    oneToN(i+1, n);
    printf("%d ", i);
}

int main(){
    int n;
    scanf("%d",&n);
    oneToN(1, n+1);
    return 0;
}