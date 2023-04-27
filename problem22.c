#include <stdio.h>
#include <math.h>

int main(){
    int i, j, a, b, t, f, count;
    scanf("%d", &t);
    while (t--){
        count = 0;
        scanf("%d%d", &a, &b);
        for (i = a; i <= b; i++){
            if (a >= 2){
                f = 1;
                for (j = 2; j <= a / 2; j++){
                    if (a % j == 0){
                        f = 0;
                        break;
                    }
                }
                if (f == 1){
                    count++;
                }
            }
            a++;
        }
        printf("%d\n", count);
    }
    return 0;
}
