#include<stdio.h>
#include<string.h>

int main(){
    int t,i,count;
    char S[1001];
    scanf("%d", &t);
    while (t--)
    {
        scanf(" %[^\n]", S);
        count = 0;
        for(i = 0; i < strlen(S); i++){
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'o' || S[i] == 'i' || S[i] == 'u'){
                count++;
            }
        }
        printf("Number of vowels = %d\n", count);
    }
    return 0;
}