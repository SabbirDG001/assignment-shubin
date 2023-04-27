#include <stdio.h>

int main(){
    int a, b, t, r, x;
    scanf("%d", &t);
    while (t--){
        scanf("%d %d", &a, &b);
        x = a * b;
        while (b != 0){
            r = a % b;
            a = b;
            b = r;
        }
        printf("LCM = %d\n", x / a);
    }
    return 0;
}