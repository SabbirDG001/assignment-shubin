#include<stdio.h>

int main(){
    int t,arr[3],temp;
    scanf("%d", &t);
    for(int i = 0; i < t; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[j]);
        }
        for( int j = 0; j < 3; j++){
            for(int k = j+1; k < 3; k++){
                if(arr[j] >= arr[k]){
                    temp = arr[j];
                    arr[j] = arr[k];
                    arr[k] = temp;
                }
            }
        }
        printf("Case %d: %d %d %d\n", i+1,arr[0], arr[1], arr[2]);
    }
}