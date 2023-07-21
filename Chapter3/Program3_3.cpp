#include <stdio.h>
#include <string.h>
#define maxn 20

int a[maxn][maxn];

int main()
{
    int x, y, n, tot = 0;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));
    tot = a[x = 0][y = n - 1] = 1;
    while (tot < n * n)
    {
        while (x + 1 < n && !a[x + 1][y])
            a[++x][y] = ++tot;
        while (y > 0 && !a[x][y - 1])
            a[x][--y] = ++tot;
        while (x > 0 && !a[x - 1][y])
            a[--x][y] = ++tot;
        while (y + 1 < n && !a[x][y + 1])
            a[x][++y] = ++tot;
        /*  思路：y最大为n-1，暂定为3
         *  因为循环体中y要自增1，当y=3时，结束循环，循环体只能是y=2最大，自增3，退出循环
         *  所以y+1<n,当y=3时无法进入循环，y=2是最后一次循环，
         *  赋值：y++; a[x][y(3)] = ++tot;  -->> a[x][++y] = ++tot;
         *  循环进入条件是y不能是3，另外y=2时，是为a[x][3]赋值（最后一次赋值），所以a[x][3]必须==0
         *  -->> a[x][y+1] == 0 -->> !a[x][y+1]
         */
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%-2d ", a[i][j]);
        printf("\n");
    }
    return 0;
}