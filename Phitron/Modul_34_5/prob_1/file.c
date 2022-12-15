#include<stdio.h>
#include<stdbool.h>

int main(){
    FILE *inputFile = fopen("input.txt","r");
    FILE *outputFile = fopen("output.txt","w");
    while(true){
        int ch = fgetc(inputFile);
        if(ch==EOF)
        break;
        fputc(ch, outputFile);
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}