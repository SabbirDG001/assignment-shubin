#include<stdio.h>
#include<stdlib.h>


//undone


int main(){
    char nums[10000000];
    scanf(" %[^\n]", nums);
    char *ptr, *e;
    long input;
    int count = 0;
    ptr = nums;
    for(ptr = nums; ; ptr = e){
        input = strtol(ptr,&e,10);
        if(ptr == e){
            break;
        }
        count++;
    }
    printf("%d\n", count);
    return 0;
}