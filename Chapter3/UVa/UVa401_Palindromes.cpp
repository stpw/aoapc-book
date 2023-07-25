#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char *rev = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char *msg[] = {"not a palindrome", "a regular palindrome", "a mirrored string", "a mirrored palindrome"};
char r(char ch); // 根據傳入字符，獲取其反轉字符
int main()
{
    char s[30];
    while (scanf("%s", s) == 1)
    {
        int p = 1, m = 1;
        for (int i = 0; i < strlen(s) / 2; i++)
        {
            if (s[i] != s[strlen(s) - i - 1])
                p = 0; // 不是回文串
            if (r(s[i]) != s[strlen(s) - i - 1])
                m = 0;
        }
        printf("%s -- is %s.\n\n", s, msg[m * 2 + p]);
    }
    return 0;
}
char r(char ch)
{
    if (isalpha(ch))
        return rev[ch - 'A'];
    return rev[ch - '0' + 25];
}