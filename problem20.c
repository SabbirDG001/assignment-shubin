#include<stdio.h>
#include<string.h>

int main(){
    int t, i, count;
    char S[10001];
    
    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", S);
        count = 1;
        for(i = 0; i < strlen(S); i++){
            if(S[i] == ' '){
                count++;
            }
        }
        printf("Count = %d\n", count);
    }
    return 0;
}