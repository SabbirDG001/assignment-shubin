#include<stdio.h>

int main(){
    int t,x,a,sum,before;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        before = x;
        sum = 0;
        while(x > 0){
            a = x % 10;
            x = x / 10;
            sum = sum + a*a*a;
        }
        if(sum == before){
            printf("%d is an armstrong number!\n", before);
        }
        else{
            printf("%d is not an armstrong number!\n", before);
        }
    }
    return 0;
}