#include<stdio.h>
int main(){
    int t,i,j,f,n;
    int arr[100000];
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        for(i = 0; i < n-1; i++){
            scanf("%d", &arr[i]);
        }        
        for(i = 1; i <= n; i++){
            f = 0;
            for(j = 0; j < n-1; j++){
                if(arr[j] == i){
                    f = 1;
                    break;
                }
            }
            if(f == 0){
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}