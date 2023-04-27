#include<stdio.h>

int main(){

    int t;
    char x[2];
    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", x);
        if(x[0] >= 'a' && x[0] <= 'z'){
            printf("Lowercase Character\n");
        }
        else if(x[0] >= 'A' && x[0] <= 'Z'){
            printf("Uppercase Character\n");
        }
        else if(x[0] >= '0' && x[0] <= '9'){
            printf("Numerical Digit\n");
        }
        else{
            printf("Special Character\n");
        }
    }
    return 0;
}