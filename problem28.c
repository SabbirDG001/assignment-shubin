#include<stdio.h>

int main(){
    int t,n,i,f;
    int arr[20];
    scanf("%d", &t);
    while(t--){
        f = 1;
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        int x = arr[0];
        for(i = 1; i < n; i++){
            if(arr[i] > x){
                x = arr[i];
            }
            else{
                f = 0;
            }
        }
        if(f == 1){
            printf("YES");
        }
        if(f == 0){
            printf("NO");
        }
    }
    return 0;
}