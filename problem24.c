#include<stdio.h>

int main(){
    int t,i,n;
    int arr[100];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        for(i = 0; i < n; i += 2){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}