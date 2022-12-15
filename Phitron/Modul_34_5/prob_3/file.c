#include<stdio.h>

int main()
 {
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile==NULL){
        printf("No input file!\n");
        return 0;
    }
    FILE *outputFile = fopen("output.txt","w");
    int m;
    fscanf(inputFile,"%d",&m);
    for(int i = 1; i<=m; i++){
        int n;
        fscanf(inputFile, "%d",&n);
        if(n>0){
            for(int i = n; i>=-n; i--)
              {
                fprintf(outputFile,"%d ", i);
              }
            fprintf(outputFile, "\n");
        }else{
            for(int i = n; i<=-n;i++)
               {
                fprintf(outputFile,"%d ",i);
               }
            fprintf(outputFile, "\n");
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}