#include<stdio.h>

int main(){
    int n, i, j,k;
    scanf("%d", &n);
    int a, b;
    for(k = 1; k<=n; k++){
        scanf("%d%d",&a,&b);
         if(a==1||a==0)
            {
                printf("%d ", a);
            }
        for(i = a; i<=b; i++)
        {
        for(j = 2; j<=i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("%d ", i);
        }
        }
        printf("\n");
    }
}