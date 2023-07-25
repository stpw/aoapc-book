#include <stdio.h>
char s[] = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    int i, c;
    while ((c = getchar()) != EOF)
    {
        /* code */
        for (i = 1; s[i] && s[i] != c; i++)
            ;
        if (s[i])
            putchar(s[i - 1]);
        else
            putchar(c);
    }
    return 0;
}

/*
 *題目輸入保證合法，就不要去強行魯棒
 */