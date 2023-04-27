#include <stdio.h>
// need to understand
int main()
{
    int t, n, count, i, j, sum;
    scanf("%d", &t);
    for(j = 0; j < t; j++){
        scanf("%d", &n);
        count = 0;
        for(i = 5; i <=n; i = i + 5){
            sum = i;
            while(sum % 5 == 0){
                count++;
                sum = sum / 5;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
