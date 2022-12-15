#include<stdio.h>

int main(){
    FILE *inputFile = fopen("input.txt","r");
    if(inputFile==NULL){
        printf("No input file!\n");
        return 0;
    }
    FILE *outputFile = fopen("output.txt", "a");

    int y;
    fscanf(inputFile, "%d",&y);

    if(y%4==0&&y%100!=0||y%400==0){
        fprintf(outputFile, "%d-->Yes\n",y);
    }else{
        fprintf(outputFile, "%d-->No\n",y);
    }

}