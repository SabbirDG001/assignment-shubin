#include<stdio.h>
#include<string.h>

int main(){
    int t,i,j;
    char str[1001];

    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", str);
        for(i = strlen(str); i >= 0; i--){
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}