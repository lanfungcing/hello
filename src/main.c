#include<stdio.h>

int main(int argc, char** argv){
    if(argc == 1){
        printf("hello, world!\n");
        return 0;
    }
    printf("hello, ");
    for(int i=1; i<argc; i++){
        printf("%s", argv[i]);
        if(i+1 == argc){
            printf(".\n");
        }
        else{
            printf(" ");
        }
    }
    return 0;
}