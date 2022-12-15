#include<stdio.h>

int main(){
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile==NULL){
        printf("No input file!\n");
        return 0;
    }
    FILE *outputFile = fopen("output.txt","w");
    int n, sum = 0;
    int arr[n];
    fscanf(inputFile,"%d",&n);
    for(int i = 1; i<=n; i++){
        fscanf(inputFile, "%d",&arr[i]);
        int lastDigit = arr[i]%10;
            sum+=lastDigit;
    }
    fprintf(outputFile,"Sum = %d\n",sum);
    fclose(inputFile);
    fclose(outputFile);
    return 0;    
}