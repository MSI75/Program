#include<stdio.h>

int main(){
    char str[100];
    scanf("%s",str);

    char ch[]={"champions"};

    for(int i = 0; i<sizeof(str); i++){
        if(str[ch[i]]==ch[i] || str[ch[i-32]]==ch[i-32]){
             printf("No\n");
           
            break;
        }else{
            printf("Yes\n");
            break;
        }
    }
}