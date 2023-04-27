#include<stdio.h>

int main(){
    int t,r1,r2,b,played;
    double crr,arr;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &r1,&r2, &b);
        played = 300 - b;
        crr = (r2 * 1.0/(played * 1.0) ) * 6;
        arr = (((r1-r2+1) * 1.0) / (b * 1.0)) * 6;
        printf("%.2lf %.2lf\n", crr, arr);
    }
    return 0;
}