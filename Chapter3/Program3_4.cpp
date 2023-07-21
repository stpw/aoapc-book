#include <stdio.h>
#include <string.h>
int main()
{
    int count = 0;
    char buff[99];
    char s[20]; // 用于查找字符是否是特定数字合集
    scanf("%s", s);
    for (int abc = 111; abc <= 999; abc++)
    {
        for (int de = 11; de <= 99; de++)
        {
            //memset(buff, '*', sizeof(buff));
            int ok = 1;
            int x = abc * (de % 10);
            int y = abc * (de / 10);
            int z = abc * de;
            sprintf(buff, "%d%d%d%d%d", abc, de, x, y, z);
            for (unsigned int i = 0; i < strlen(buff); i++)
                if (strchr(s, buff[i]) == NULL) // 判断abc*de的中间结果和最终结果是否在S集合内
                    ok = 0;
            if (ok)
            {
                printf("<%d>\n", ++count);
                printf("%5d\nX%4d\n-----\n%5d\n%-4d\n-----\n%5d\n", abc, de, x, y, z);
            }
        }
    }
    printf("The number of solutions = %d", count);
    return 0;
}