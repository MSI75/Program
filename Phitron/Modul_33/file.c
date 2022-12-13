// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         scanf("%d",&arr[i]);
//         sum +=arr[i];
//     }
//     printf("Sum = %d\n",sum);
//     return 0;
// }

#include<stdio.h>

int main(){
    FILE *inputFile;
    inputFile = fopen("input.txt","r");

    if(inputFile==NULL){
        printf("No File Found!\n");
        return 0;
    }

    FILE *outputFile;
    outputFile = fopen("output.txt","w");

    while(1){
        char ch = fgetc(inputFile);
        if(ch==EOF){
            break;
        }
        // printf("%c",ch);
        fputc(ch,outputFile);
    }
    return 0;
}