#include<stdio.h>
#include<math.h>

int main(){
    int t,n,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if(ceil(sqrt(n)) == floor(sqrt(n))){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}