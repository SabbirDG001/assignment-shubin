#include<stdio.h>
#include<string.h>

int main(){
    int t,i,v,c;
    char S[1001], V[1001], C[1001];
    scanf("%d", &t);
    while(t--){
        scanf(" %[^\n]", S);
        for(i = 0, v = 0, c = 0; i < strlen(S); i++){
            if(S[i] >= 'a' && S[i] <= 'z'){
                if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
                    V[v] = S[i];
                    v++;
                }
                else{
                    C[c] = S[i];
                    c++;
                }
            }
        }
        printf("%s\n", V);
        printf("%s\n", C);
    }
    return 0;
}