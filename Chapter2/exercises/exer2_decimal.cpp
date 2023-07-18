#include <stdio.h>
#include <stdlib.h>
void Carry(int cc[], int k);
int main()
{
    int a, b, c, kase = 0;
    while (scanf("%d%d%d", &a, &b, &c) == 3 && a != 0 && b != 0 && c != 0)
    {
        int cc[110];
        kase++;
        cc[0] = a / b;
        // printf("Case %d: %d.", kase, a / b); // 獲得整數位

        //1、獲得小數位，使用小學的“乘10取餘”法計算
        a %= b; // 取餘來計算小數位
        for (int i = 1; i <= c + 1; i++)
        { // c位小數
            cc[i] = (a * 10) / b;
            a = (a * 10) % b;
        }

        //2、最後一位判斷進位
        if (cc[c + 1] >= 5) // c+1位判断进位
        {
            cc[c] += 1;
            Carry(cc, c);
        }
        
        //3、結果輸出
        printf("Case %d: %d.", kase, cc[0]);
        for (int i = 1; i < c + 1; i++)
        {
            printf("%d", cc[i]);
        }
        printf("\n");
    }
    return 0;
}

void Carry(int cc[], int k) // CC 在下标为k时进位
{
    int carryBit = 0;
    do
    {
        carryBit = cc[k] / 10;
        cc[k] %= 10;
        k--;
        cc[k] += carryBit;
    } while (cc[k] > 9 && k > 0);
}