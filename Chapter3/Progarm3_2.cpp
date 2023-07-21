#include <stdio.h>
int main()
{
    char c = 0;
    // printf("%x \n",1<<-1);
    // return 0;
    int n, k;
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= k; i++)
    {
        for (int j = 0; j <= n; j = j + i)
            c ^= (1 << (j - 1));
        // printf("%x \n",c);
    }
    // printf("%x \n", c);
    int first = 1;
    for (int i = 1; i <= n; i++)
    {
        if (c & 1 == 1)
        {
            if (first)
                first = 0;
            else
                printf(" ");
            printf("%d", i);
        }
        c = c >> 1;
    }
    return 0;
}