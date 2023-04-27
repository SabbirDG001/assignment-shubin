#include<stdio.h>
#include<string.h>

int main(){
    int t,i,count;
    char str[10001];
    char look[2];

    scanf("%d", &t);
    while(t--){
        count = 0;
        scanf(" %[^\n]", str);
        scanf("%s", look);
        for(i=0; i < strlen(str); i++){
            if(str[i] == look[0]){
                count++;
            }
        }
        if(count > 0){
            printf("Occurrence of '%c' in '%s' = %d\n", look[0], str, count);
        }
        if(count == 0){
            printf("'%c' is not present\n", look[0]);
        }
    }
    return 0;
}