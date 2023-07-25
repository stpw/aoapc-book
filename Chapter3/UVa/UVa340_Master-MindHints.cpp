#include <stdio.h>
#define maxn 1010
int main()
{
    int A, B, kase = 0, n, a[maxn], b[maxn];
    while (scanf("%d", &n) == 1 && n)
    {
        printf("game %d:\n", ++kase);
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (;;)
        {
            A = B = 0;
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &b[i]);
                if (a[i] == b[i])
                    A++;
            }
            if (b[0] == 0)
                break;
            for (int d = 1; d <= 9; d++)
            {
                int c1 = 0, c2 = 0;
                for (int i = 0; i < n; i++)
                {
                    if (a[i] == d)
                        c1++;
                    if (b[i] == d)
                        c2++;
                }
                if (c1 < c2)
                    B += c1;
                else
                    B += c2;
            }
            printf("   (%d,%d)\n", A, B - A);
        }
    }
    return 0;
}