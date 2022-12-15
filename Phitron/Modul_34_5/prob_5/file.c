#include<stdio.h>

int main(){
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile==NULL){
        printf("No input file!\n");
        return 0;
    }
    FILE *outputFile = fopen("output.txt","w");

    int n;
    fscanf(inputFile, "%d",&n);
     fclose(inputFile);
    // printf("%d", n);
    for(int i = 0; i<n; i++){
        for(int j = n-i; j>=1;j--){
            fprintf(outputFile,"%c",' ');
        }
        for(int i = 1; i<=n; i++){
            fprintf(outputFile,"%c",'#');
        }
        fprintf(outputFile,"\n");
        // fprintf(outputFile,"%d \n", i);
        // fprintf(outputFile,"\n")
    }
   
    fclose(outputFile);
    return 0;
}