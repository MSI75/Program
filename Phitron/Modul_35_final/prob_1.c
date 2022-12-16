#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int index = 0;
    for(int i = 1; i<=n;i++){
        for(int j = n-i; j>=1;j--){
            printf("%c",' ');
        }
        if(i%2==1){
            for(int j = 1; j<=i+index;j++){
                printf("%c", '^');
            }
            printf("\n");
            index++;
        }else{
         for(int j = 1; j<=i+index;j++){
                printf("%c",'*');
            }
            index++;
            printf("\n");
        }
    }
}