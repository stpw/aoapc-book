#include <stdio.h>
int main()
{
    int c, q = 1;
    FILE* fin;
    fin = fopen("data.in","rb");
    while ((c = fgetc(fin)) != EOF)//fgetc(stdin)==getchar()
    {
        if (c == '"')
        {
            printf("%s", q ? "``" : "''");
            q = !q;
        }
        else
            printf("%c", c);
    }
    fclose(fin);
    return 0;
}
/*
 *為什麼無法換行？？fgetc函數無法讀入換行符
 *經測試，文件中可以讀入換行符，標準輸入無法，？？
 */

/*
 *fgets(buff,maxn,fin)讀取完整的一行，到"\n"或者EOF
 *
 * */