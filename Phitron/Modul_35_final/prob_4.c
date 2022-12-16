#include<stdio.h>

int main(){
    int ch[]={'A','B','C', 'D','E','F','G','H','I'};
    int n, x;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        scanf("%d",&x);
        while (x!=0)
        {
            int digit = x%10;
            char c = ch[digit-1];
            printf("%c",c);
            x/=10;
        } 
        printf("\n"); 
    }
    return 0;
}