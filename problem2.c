#include <stdio.h>
#include<string.h>

int main()
{
    int t,len;
    char num[101];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", &num);
        len = strlen(num);
        if(num[len-1] % 2 == 0){
            printf("even\n");
        }
        if(num[len-1] % 2 !=0){
            printf("odd\n");
        }
    }
    return 0;
}