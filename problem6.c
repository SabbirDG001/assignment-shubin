#include<stdio.h>

int main(){
    int t,n,a,b,c,d,e;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        a = n % 10;
        n = n / 10;
        b = b % 10;
        n = n / 10;
        c = n % 10;
        n = n / 10;
        d = n % 10;
        n = n / 10;
        e = n % 10;
        printf("Sum = %d\n", a+e);
    }
    return 0;
}