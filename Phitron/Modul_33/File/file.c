#include<stdio.h>

int main(){
    // FILE *logFile = fopen("logFile.txt","w");
    FILE *logFile = fopen("logFile.txt","a");
    FILE *inputFile = fopen("logFile1.txt","r");
    if(inputFile==NULL){
    fprintf(logFile,"input file not found at 09:30 PM\n");
    return 0;
    }
    return 0;
}