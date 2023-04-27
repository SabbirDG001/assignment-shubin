#include<stdio.h>
#include<math.h>

int main(){
    int t,i,j,arr[3],temp,s,p1,p2,p3;
    double area;
    scanf("%d", &t);
    while(t--){
        for(i = 0; i < 3; i++){
            scanf("%d", &arr[i]);
        }
        for(i = 0; i < 3; i++){
            for(j = i; j < 3; j++){
                if(arr[i] < arr[j]){
                    continue;
                }
                else{
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        if(arr[0] + arr[1] > arr[2]){
            s = (arr[0] + arr[1] + arr[2]) / 2;
            p1 = s - arr[0];
            p2 = s - arr[1];
            p3 = s - arr[2];
            area = (double) sqrt(s * p1 * p2 * p3);
        }
        printf("Area = %.3lf\n", area);
    }
    return 0;
}