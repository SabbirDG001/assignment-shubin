#include<stdio.h>

int main(){
    int t,n,i;
    long long int f;
    scanf("%d", &t);
    while(t--){
        f = 1;
        scanf("%d", &n);
        for(i = 1; i <=n; i++){
            f = f * i;
        }
        printf("%lld", f);
    }
}