#include<stdio.h>
#include<string.h>

int main(){
    int t,i;
    char S[101];
    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", S);
        for(i = 0; i < strlen(S); i++){
            if(S[i] >= 'A' && S[i] <= 'Z'){
                printf("%d", S[i]-64);
            }
        }
        printf("\n");
    }
    return 0;
}