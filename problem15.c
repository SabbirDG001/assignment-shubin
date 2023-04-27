#include <stdio.h>
#include <string.h>
// need to understand
int main()
{
    char S[1000];
    int count[26];
    int t, i, j;

    scanf("%d", &t);
    while (t--)
    {
        for (j = 0; j < 26; j++)
        {
            count[j] = 0;
        }
        scanf("%s", S);
        for (i = 0; i < strlen(S); i++)
        {
            if (S[i] >= 'a' && S[i] <= 'z')
            {
                count[S[i] - 'a']++;
            }
        }
        for (i = 0; i < 26; i++)
        {
            if (count[i] != 0)
            {
                printf("%c = %d\n", 'a' + i, count[i]);
            }
        }
    }
    return 0;
}