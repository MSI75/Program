#include<stdio.h>

int main(){
    int n, m;
    scanf("%d%d",&n,&m);
    int sub = m - n;
    int div = sub/2;
    printf("%d\n",div);
    return 0;
}