#include<stdio.h>

int main(){
    int i,j;
    for(i=1000; i>0;i--){
        if((i % 10 == 6)|| (i % 10 == 1)){
            printf("%d\t", i);
            printf("\n");
        }
        else{
            printf("%d\t", i);
        }
    }
    return 0;
}