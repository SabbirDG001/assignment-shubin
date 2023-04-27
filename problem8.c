// Arrange small to large
#include <stdio.h>

int main()
{
    int t, k, i, j, a, b, c, temp, con;
    int arr[3];
    scanf("%d", &t);
    for (k = 0; k < t; k++)
    {
        scanf("%d %d %d", &a, &b, &c);
        arr[0] = a;
        arr[1] = b;
        arr[2] = c;
        for (i = 0; i < 3; i++)
        {
            temp = arr[i];
            // for (j = 0; j < 3; j++) ---> to assend
            // for (j = i; j < 3; j++) ---> to desend
            for (j = 0; j < 3; j++)
            {
                if (arr[j] > temp)
                {
                    con = arr[i];
                    arr[i] = arr[j];
                    arr[j] = con;
                    temp = arr[j];
                }
            }
        }
        printf("Case %d: %d %d %d\n", k+1, arr[0], arr[1], arr[2]);
    }
    return 0;
}